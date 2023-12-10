#pragma once

#include <vector>
#include "File.h"

class Catalog {
private:
    std::vector<File> files;

public:
    Catalog();

    ~Catalog();

    void addFile(const std::string& name, int size, const std::string& date, const std::string& attr);

    void listFiles() const;

    void removeFile(const std::string& name);
};
