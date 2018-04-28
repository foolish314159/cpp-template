# cpp-template
C++ template for automated builds, tests and continuous integration using CMake, GoogleTest, Travis and AppVeyor

## CMake commands

### Generate build files:
```
mkdir build
cd build
cmake ..
```

### Build (debug configuration):
```
cd build
cmake --build .
```

### Run tests:
```
cd build
ctest -C Debug --output-on-failure
```
