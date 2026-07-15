#include "Commands.hpp"

#include <iostream>

void Commands::handleAdd(const std::vector<std::string> &args) {
  // handle Add
  std::cout << "Add" << std::endl;
}

void Commands::handleView(const std::vector<std::string> &args) {
  // handle view
  std::cout << "View" << std::endl;
}

void Commands::handleOpen(const std::vector<std::string> &args) {
  // handle open
  std::cout << "Open" << std::endl;
}
