#include "my_lib.h"
#include <cstdint>
#include <iostream>
#include <nlohmann/json.hpp>

void print_func() {
  std::cout << "Hello World\n";

  std::cout << "JSON Lib Version:" 
    << NLOHMANN_JSON_VERSION_MAJOR << "."
    << NLOHMANN_JSON_VERSION_MINOR << "."
    << NLOHMANN_JSON_VERSION_PATCH << "\n";
}

std::uint32_t Factorial(std::uint32_t number) {
  return number <= 1 ? 1:Factorial(number-1)*number;
}
