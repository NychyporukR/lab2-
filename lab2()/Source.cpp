#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "File.h"
#include "Сatalog.h"
#include "Windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Catalog catalog;

    catalog.addFile("file1.txt", 1024, "2023-11-06 10:30:00", "readonly");
    catalog.addFile("file2.jpg", 2048, "2023-11-07 15:45:00", "hidden");
    catalog.addFile("file3.doc", 512, "2023-11-08 09:15:00", "readwrite");

    cout << "Список файлів в каталозі:" << endl;
    catalog.listFiles();

    catalog.removeFile("file2.jpg");

    cout << "Після видалення файлу:" << endl;
    catalog.listFiles();

    return 0;
}
