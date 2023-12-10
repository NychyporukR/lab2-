#include "File.h"

File::File(const std::string& n, int s, const std::string& date, const std::string& attr)
    : name(n), size(s), creationDate(date), attributes(attr) {}

File::~File() {}

const std::string& File::getName() const {
    return name;
}

void File::display() const {
    std::cout << "����� �����: " << name << std::endl;
    std::cout << "�����: " << size << " �����" << std::endl;
    std::cout << "���� �� ��� ���������: " << creationDate << std::endl;
    std::cout << "��������: " << attributes << std::endl;
}
