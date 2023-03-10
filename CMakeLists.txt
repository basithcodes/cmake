cmake_minimum_required(VERSION 3.22)

project(
  CppProjectTemplate
  VERSION 1.0.0
  LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(ENABLE_TESTING "Enable a Unit Test" OFF)

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME exec)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
# include(AddGitSubmodule)
include(FetchContent)

# Fetch can be used when project supports cmake if it doesnt use add_git_submodule
FetchContent_Declare(
  nlohmann_json # library name
  GIT_REPOSITORY https://github.com/nlohmann/json # git link
  GIT_TAG v3.11.2 # library version number
  GIT_SHALLOW TRUE) # not recursively clone the project?
FetchContent_MakeAvailable(nlohmann_json) # load library from github into our library

FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt
  GIT_TAG 9.1.0
  GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(fmt)

FetchContent_Declare(
  spdlog
  GIT_REPOSITORY https://github.com/gabime/spdlog
  GIT_TAG v1.11.0
  GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(spdlog)

FetchContent_Declare(
  cxxopts
  GIT_REPOSITORY git@github.com:jarro2783/cxxopts.git
  GIT_TAG v3.0.0
  GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(cxxopts)


FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2
  GIT_TAG v2.13.9
  GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(Catch2)

# add_git_submodule(external_libraries/json)

add_subdirectory(appcfg)
# add_subdirectory(external_libraries)
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)
