#include <iostream>
#include <fstream>
#include <clocale>
#include <string>
#include "MainClass.h"


int main()
{
    setlocale(0, "ru");

    FilesWork file("some.txt");

    file.write_file("new text");

    file += "!!!";

    file.read_file();

    return 0;
}
