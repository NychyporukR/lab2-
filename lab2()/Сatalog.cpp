#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Сatalog.h"

Catalog::Catalog() {}

Catalog::~Catalog() {}

void Catalog::addFile(const std::string& name, int size, const std::string& date, const std::string& attr) {
    File file(name, size, date, attr);
    files.push_back(file);
}

void Catalog::listFiles() const {
    for (const File& file : files) {
        file.display();
        std::cout << std::endl;
    }
}

void Catalog::removeFile(const std::string& name) {
    auto it = std::find_if(files.begin(), files.end(), [&](const File& file) {
        return file.getName() == name;
        });

    if (it != files.end()) {
        files.erase(it);
        std::cout << "Файл '" << name << "' успішно видалено." << std::endl;
    }
    else {
        std::cout << "Файл '" << name << "' не знайдено в каталозі." << std::endl;
    }
}
