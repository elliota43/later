#ifndef COMMANDS_H
#define COMMANDS_H

#include "DB.hpp"

#include <string>
#include <vector>

namespace Commands {

void handleAdd(const std::vector<std::string> &args, DB &db);

void handleView(const std::vector<std::string> &args, DB &db);

void handleOpen(const std::vector<std::string> &args, DB &db);

} // namespace Commands

#endif
