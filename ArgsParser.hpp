#ifndef ARGS_PARSER_H
#define ARGS_PARSER_H

#include <string>
#include <vector>

enum class CommandType {
  None,
  Add,
  Open,
  View,
  Unknown,
};

class ArgsParser {
public:
  ArgsParser(int argc_val, const char **argv)
      : argc{static_cast<size_t>(argc_val)}, rawargs{argv} {}

  void parse();

  CommandType getCommand() const { return activeCmd; }

  std::vector<std::string> getCommandArgs() const;

private:
  size_t argc;
  const char **rawargs;
  std::vector<std::string> parsedArgs;
  CommandType activeCmd;
};

#endif
