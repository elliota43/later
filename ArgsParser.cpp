#include "ArgsParser.hpp"

void ArgsParser::parse() {
  parsedArgs.assign(rawargs + 1, rawargs + argc);

  if (parsedArgs.empty()) {
    activeCmd = CommandType::None;
    return;
  }

  const std::string &subcommand = parsedArgs[0];

  if (subcommand == "add") {
    activeCmd = CommandType::Add;
  } else if (subcommand == "view") {
    activeCmd = CommandType::View;
  } else if (subcommand == "open") {
    activeCmd = CommandType::Open;
  } else {
    activeCmd = CommandType::Unknown;
  }
}

auto ArgsParser::getCommandArgs() const -> std::vector<std::string> {
  if (parsedArgs.size() <= 1)
    return {};

  return std::vector<std::string>(parsedArgs.begin() + 1, parsedArgs.end());
}
