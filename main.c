#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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

  if (strcmp(argv[1], "add") == 0) {

  } else if (strcmp(argv[1], "open") == 0) {

  } else if (strcmp(argv[1], "view") == 0) {

  } else {
    print_usage(argv);
    exit(1);
  }
}
