from setuptools import find_packages
from setuptools import setup

setup(
    name='dynamixel_workbench_msgs',
    version='2.0.3',
    packages=find_packages(
        include=('dynamixel_workbench_msgs', 'dynamixel_workbench_msgs.*')),
)
