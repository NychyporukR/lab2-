#pragma once

#include <iostream>
#include <string>

class File {
private:
    std::string name;
    int size;
    std::string creationDate;
    std::string attributes;

public:
    File(const std::string& n, int s, const std::string& date, const std::string& attr);

    ~File();

    const std::string& getName() const;

    void display() const;
};
