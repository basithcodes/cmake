#include <iostream>
#include <cxxopts.hpp>
#include <nlohmann/json.hpp>
#include <fmt/format.h>
#include <spdlog//spdlog.h>

#include "my_lib.h"
#include "config.hpp"

int main() {
  std::cout << project_name << '\n';
  std::cout << project_version << '\n';

  std::cout << "JSON Lib Version:" 
    << NLOHMANN_JSON_VERSION_MAJOR << "."
    << NLOHMANN_JSON_VERSION_MINOR << "."
    << NLOHMANN_JSON_VERSION_PATCH << "\n";

  std::cout << "fmt" << FMT_VERSION << "\n";

  std::cout << "CXXOPTS:"
    << CXXOPTS__VERSION_MAJOR << "."
    << CXXOPTS__VERSION_MINOR << "."
    << CXXOPTS__VERSION_PATCH << "\n";

  std::cout << "SPD:" 
    << SPDLOG_VER_MAJOR << "."
    << SPDLOG_VER_MINOR << "."
    << SPDLOG_VER_PATCH << "\n";

  print_func();
  return 0;
}
