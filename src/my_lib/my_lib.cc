#include "my_lib.h"
#include <iostream>
#include <nlohmann/json.hpp>

void print_func() {
  std::cout << "Hello World\n";

  std::cout << "JSON Lib Version:" 
    << NLOHMANN_JSON_VERSION_MAJOR << "."
    << NLOHMANN_JSON_VERSION_MINOR << "."
    << NLOHMANN_JSON_VERSION_PATCH << "\n";
}
