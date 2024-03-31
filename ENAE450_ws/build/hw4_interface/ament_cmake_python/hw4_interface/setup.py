from setuptools import find_packages
from setuptools import setup

setup(
    name='hw4_interface',
    version='0.0.0',
    packages=find_packages(
        include=('hw4_interface', 'hw4_interface.*')),
)
