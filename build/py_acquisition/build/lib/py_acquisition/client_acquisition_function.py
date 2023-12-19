
import sys

from interface_acquisition.srv import CreationFichierPly
import rclpy
from rclpy.node import Node

from ply_to_pcd import PLYConverter
from pcd_to_mesh import PCDConverter
from mesh_to_stl import MESHConverter


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(CreationFichierPly, 'creation_fichier_ply')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = CreationFichierPly.Request()

    def send_request(self, a):
        self.req.a = a
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    response = minimal_client.send_request(int)
    minimal_client.get_logger().info(
        (int, response.sum))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()