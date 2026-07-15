#ifndef DB_H
#define DB_H

#include <cstdlib>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

class DB {
public:
  DB()
      : dbFile{resolveDBPath(), std::ios::in | std::ios::out | std::ios::app |
                                    std::ios::binary} {}

private:
  std::fstream dbFile;

  static std::string resolveDBPath() {
    const char *homeEnv = std::getenv("HOME");

    fs::path basePath;
    if (homeEnv != nullptr)
      basePath = homeEnv;
    else
      basePath = "/tmp";

    fs::path fullPath = basePath / ".local" / "later" / "db" / "later.db";

    fs::create_directories(fullPath.parent_path());

    return fullPath;
  }
};

#endif
