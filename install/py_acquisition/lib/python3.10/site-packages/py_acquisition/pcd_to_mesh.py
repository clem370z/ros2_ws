import open3d as o3d
from ply_to_pcd import PLYConverter

class PCDConverter:
    def __init__(self, file_path):
        # Step 1: Convert PLY to Point Cloud (PCD)
        converter = PLYConverter(file_path)
        pcd = converter.pcd

        # Step 2: Convert PCD to Mesh
        self.mesh = self.convert_to_mesh(pcd)

    def convert_to_mesh(self, pcd):
        # Step 3: Estimate Normals if not already computed
        if not pcd.has_normals():
            pcd.estimate_normals(search_param=o3d.geometry.KDTreeSearchParamHybrid(radius=0.1, max_nn=30))

        # Step 4: Orient Normals for consistency
        if pcd.has_normals():
            pcd.orient_normals_consistent_tangent_plane(100)

        # Step 5: Remove Statistical Outliers from the Point Cloud
        pcd.remove_statistical_outlier(nb_neighbors=20, std_ratio=2.0)

        # Step 6: Remove Radius Outliers from the Point Cloud
        pcd.remove_radius_outlier(nb_points=16, radius=0.01)

        # Step 7: Create Mesh using Ball Pivoting Algorithm
        radii = [0.005, 0.01, 0.02]
        mesh = o3d.geometry.TriangleMesh.create_from_point_cloud_ball_pivoting(pcd, o3d.utility.DoubleVector(radii))

        # Step 8: Smooth the Mesh using Laplacian Smoothing
        iterations = 100  # Adjust the number of smoothing iterations
        mesh.filter_smooth_laplacian(number_of_iterations=iterations)

        # Step 9: Compute Vertex Normals for the Resulting Mesh
        mesh.compute_vertex_normals()

        # Step 10: Return the Final Mesh
        return mesh







