cmake_minimum_required(VERSION 3.22)

project(
  CppProjectTemplate
  VERSION 1.0.0
  LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME exec)


# uncomment below code if exec file should'n be created
# option(COMPILE_EXECUTABLE "Whether to compile exec file or not" OFF)
# if(COMPILE_EXECUTABLE)
#   add_subdirectory(app)
# else()
#   message("main.cc file not compiled")
# endif()

add_subdirectory(appcfg)
add_subdirectory(src)
add_subdirectory(app)
