from setuptools import find_packages
from setuptools import setup

setup(
    name='xv_ros2_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('xv_ros2_msgs', 'xv_ros2_msgs.*')),
)
