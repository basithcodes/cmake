# CMake Tutorial

## Generating a project

```bash
cmake [<options>] -S <path-to-source> -B <path-to-build>
```

_Assuming that a CMakeLists.txt is in the root directory you can generate a project like the following._

```bash
mkdir build
cmake -S .. -B . # Option 1
cmake .. # Option 2
```

_Assuming that you have already built the CMake project, you can update the generated project._

```bash
cd build
cmake .
```

_Generator for GCC and Clang_

```bash
cd build
cmake -S .. -B . -G "Unix Makefiles" # Option 1
cmake .. -G "Unix Makefiles" # Option 2
```

_Generator for MSVC_

```bash
cd build
cmake -S .. -B . -G "Visual Studio 16 2019" # Option 1
cmake .. -G "Visual Studio 16 2019" # Option 2
```

_Specify the Build Type_

Per default the standard type is in most cases the debug type. If you want to generate the project, for example, in release mode you have to set the build type.
```bash
cd build 
cmake -DCMAKE_BUILD_TYPE=Release ..
```

_Passing Options_

If you have set some options in the CMakeLists, you can pass values in the command line.

```bash
cd build
cmake -DMY_OPTION=[ON|OFF] ..
```

_Specify the Build Target (Option 1)_

The standard build command would build all created targets within the CMakeLists. If you want to build a specific target, you can do so.



