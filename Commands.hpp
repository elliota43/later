#ifndef COMMANDS_H
#define COMMANDS_H

#include <string>
#include <vector>

namespace Commands {

void handleAdd(const std::vector<std::string> &args);

void handleView(const std::vector<std::string> &args);

void handleOpen(const std::vector<std::string> &args);

} // namespace Commands

#endif
