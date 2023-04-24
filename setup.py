from distutils.core import setup, Extension

module = Extension('phoenix', 
                   sources=['C:/TheCloudNetworkGroup/profile/projects/Phoenix/Library/phoenix/phoenix.c']) # relative path to phoenix.c

setup (
    name='Phoenix',
    version='1.0',
    ext_modules=[module],
    py_modules=['phoenix'] # name of the Python module
)
