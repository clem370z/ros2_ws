
import open3d as o3d

class PLYConverter:
    def __init__(self, file_path):
        # Step 1: Convert PLY to Point Cloud (PCD) during initialization
        self.pcd = self.convert_to_point_cloud(file_path)

    def convert_to_point_cloud(self, file_path):
        # Step 2: Read the Point Cloud from the PLY file
        pcd = o3d.io.read_point_cloud(file_path)

        # Step 3: Return the resulting Point Cloud (PCD)
        return pcd
