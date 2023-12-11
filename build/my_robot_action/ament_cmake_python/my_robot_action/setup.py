from setuptools import find_packages
from setuptools import setup

setup(
    name='my_robot_action',
    version='0.0.0',
    packages=find_packages(
        include=('my_robot_action', 'my_robot_action.*')),
)
