#include "File.h"

File::File(const std::string& n, int s, const std::string& date, const std::string& attr)
    : name(n), size(s), creationDate(date), attributes(attr) {}

File::~File() {}

const std::string& File::getName() const {
    return name;
}

void File::display() const {
    std::cout << "Назва файлу: " << name << std::endl;
    std::cout << "Розмір: " << size << " байтів" << std::endl;
    std::cout << "Дата та час створення: " << creationDate << std::endl;
    std::cout << "Атрибути: " << attributes << std::endl;
}
