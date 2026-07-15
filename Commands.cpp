#include "Commands.hpp"

#include <iostream>

void Commands::handleAdd(const std::vector<std::string> &args, DB &db) {
  // handle Add
  std::cout << "Add" << std::endl;

  for (auto arg : args) {
    std::cout << "arg: " << arg << std::endl;
  }
}

void Commands::handleView(const std::vector<std::string> &args, DB &db) {
  // handle view
  std::cout << "View" << std::endl;

  for (auto arg : args) {
    std::cout << "arg: " << arg << std::endl;
  }
}

void Commands::handleOpen(const std::vector<std::string> &args, DB &db) {
  // handle open
  std::cout << "Open" << std::endl;

  for (auto arg : args) {
    std::cout << "arg: " << arg << std::endl;
  }
}
