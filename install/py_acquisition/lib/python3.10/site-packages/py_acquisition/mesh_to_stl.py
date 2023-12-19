import open3d as o3d
from pcd_to_mesh import PCDConverter

class MESHConverter:
    def __init__(self, file_path):
        # Step 1: Create an instance of PCDConverter and store the resulting mesh
        pcd_converter = PCDConverter(file_path)
        self.mesh = pcd_converter.mesh

    def convert_to_stl(self, stl_file_path):
        # Step 2: Check if the mesh is not None
        if self.mesh is not None:
            # Step 3: Access the stored mesh and save it to STL file
            o3d.io.write_triangle_mesh(stl_file_path, self.mesh)
            print(f"Mesh successfully saved to {stl_file_path}")
        else:
            # Step 4: Print an error message if the mesh is None
            print("Error: Mesh is None. Conversion failed.")