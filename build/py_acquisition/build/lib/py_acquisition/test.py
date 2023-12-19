from ply_to_pcd import PLYConverter
from pcd_to_mesh import PCDConverter
from mesh_to_stl import MESHConverter
import open3d as o3d

def main():
    # Replace 'your_file.ply' with the actual path to your PLY file
    ply_file_path = '/home/naitali/Bureau/TPS-PI09-repository/plyfiles/test4.ply'

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


    output_stl_file_path = '/home/naitali/Bureau/TPS-PI09-repository/plyfiles/test.stl'

    # Create MESHConverter instance
    mesh_converter = MESHConverter(ply_file_path)

    # Convert mesh to STL
    mesh_converter.convert_to_stl(output_stl_file_path)

if __name__ == "__main__":
    main()


