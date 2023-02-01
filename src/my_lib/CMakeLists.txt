set(LIBRARY_SOURCES
  "my_lib.cc")

set(LIBRARY_HEADERS
  "../../inc/")

set(LIBRARY_INCLUDES
  "${LIBRARY_HEADERS}"
  "${CMAKE_BINARY_DIR}/appcfg_files/include")

add_library(${LIBRARY_NAME} STATIC 
  ${LIBRARY_SOURCES}
  ${LIBRARY_HEADERS})

target_include_directories(
  ${LIBRARY_NAME} PUBLIC 
  ${LIBRARY_INCLUDES})

target_link_libraries(${LIBRARY_NAME} PUBLIC
  nlohmann_json::nlohmann_json
  fmt::fmt
  spdlog::spdlog)
  # cxxopts::cxxopts)
