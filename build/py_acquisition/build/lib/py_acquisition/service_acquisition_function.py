
import open3d as o3d

import pyrealsense2 as rs
from interface_acquisition.srv import CreationFichierPly

import rclpy
from rclpy.node import Node

import sys
sys.path.append("/home/clem/ros2_ws/src/py_acquisition/py_acquisition/ply_to_pcd")
from ply_to_pcd import PLYConverter
from pcd_to_mesh import PCDConverter
from mesh_to_stl import MESHConverter

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(CreationFichierPly, 'creation_fichier_ply', self.creation_fichier_ply_callback)

    def creation_fichier_ply_callback(self, request, response):
        response.sum = request.a
        # Declare pointcloud object, for calculating pointclouds and texture mappings
        pc = rs.pointcloud()
        # We want the points object to be persistent so we can display the last cloud when a frame drops
        points = rs.points()

        # Declare RealSense pipeline, encapsulating the actual device and sensors
        pipe = rs.pipeline()
        config = rs.config()
        # Enable depth stream
        config.enable_stream(rs.stream.depth)

        # Start streaming with chosen configuration
        pipe.start(config)

        # We'll use the colorizer to generate texture for our PLY
        # (alternatively, texture can be obtained from color or infrared stream)
        colorizer = rs.colorizer()

        try:
            # Wait for the next set of frames from the camera
            frames = pipe.wait_for_frames()
            colorized = colorizer.process(frames)

            # Create save_to_ply object
            ply = rs.save_to_ply("../PI/1.ply")

            # Set options to the desired values
            # In this example we'll generate a textual PLY with normals (mesh is already created by default)
            ply.set_option(rs.save_to_ply.option_ply_binary, False)
            ply.set_option(rs.save_to_ply.option_ply_normals, True)

            print("Saving to 1.ply...")
            # Apply the processing block to the frameset which contains the depth frame and the texture
            ply.process(colorized)
            print("Done")
        finally:
            pipe.stop()
        self.get_logger().info('Incoming request\na: %d' % (request.a))

        # Replace 'your_file.ply' with the actual path to your PLY file
        #ply_file_path = '/home/naitali/Bureau/TPS-PI09-repository/plyfiles/test4.ply'
        ply_file_path = '/home/clem/PI/1.ply'

        # Test PLYConverter
        ply_converter = PLYConverter(ply_file_path)
        pcd_from_ply = ply_converter.pcd

        # Visualize the original point cloud
        o3d.visualization.draw_geometries([pcd_from_ply], window_name="Original Point Cloud")

        # Test PCDConverter
        pcd_converter = PCDConverter(ply_file_path)
        mesh_from_pcd = pcd_converter.mesh

        # Visualize the resulting mesh
        o3d.visualization.draw_geometries([mesh_from_pcd], window_name="Resulting Mesh")


        output_stl_file_path = '/home/clem/ros2_ws/src/py_acquisition/py_acquisition/1.stl'

        # Create MESHConverter instance
        mesh_converter = MESHConverter(ply_file_path)

        # Convert mesh to STL
        mesh_converter.convert_to_stl(output_stl_file_path)
        return response


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
