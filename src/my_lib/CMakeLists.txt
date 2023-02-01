set(LIBRARY_SOURCES
  "my_lib.cc")

set(LIBRARY_HEADERS
  "../../inc/")

add_library(${LIBRARY_NAME} STATIC 
  ${LIBRARY_SOURCES})

target_include_directories(
  ${LIBRARY_NAME} PUBLIC 
  "${LIBRARY_HEADERS}"
  "${CMAKE_BINARY_DIR}/appcfg_files/include")
