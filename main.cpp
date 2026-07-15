#include "ArgsParser.hpp"
#include <cstdlib>

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

  switch (parser.getCommand()) {
  case CommandType::None:
    print_usage(argv);
    break;

  case CommandType::Open:
    // open
    break;

  case CommandType::Add:
    // add
    break;

  case CommandType::View:
    // view
    break;

  case CommandType::Unknown:
    print_usage(argv);
    break;
  }
}
