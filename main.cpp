#include "ArgsParser.hpp"
#include "Commands.hpp"
#include "DB.hpp"

#include <cstdlib>
#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

void print_usage(const char **argv) {
  fprintf(stderr, "Usage: %s add [tag]\n", argv[0]);
  fprintf(stderr, "       %s view [tag]\n", argv[0]);
  fprintf(stderr, "       %s open [ID]\n", argv[0]);
}

int main(int argc, const char *argv[]) {
  if (argc < 2) {
    print_usage(argv);
    exit(1);
  }

  ArgsParser parser{argc, argv};

  parser.parse();

  CommandType cmd_type = parser.getCommand();

  using CommandHandler =
      std::function<void(const std::vector<std::string> &, DB &db)>;

  DB db{};

  std::unordered_map<CommandType, CommandHandler> commandMap = {
      {CommandType::Add, Commands::handleAdd},
      {CommandType::Open, Commands::handleOpen},
      {CommandType::View, Commands::handleView},
  };

  auto it = commandMap.find(cmd_type);
  if (it != commandMap.end()) {
    it->second(parser.getCommandArgs(), db);
  } else {
    std::cerr << "Unknown command.\n";
    print_usage(argv);
  }
}
