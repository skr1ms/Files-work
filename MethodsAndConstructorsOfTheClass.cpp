#include <iostream>
#include <fstream>
#include <clocale>
#include <string>
#include "MainClass.h"

using std::string;
using std::ofstream;
using std::ifstream;

FilesWork::FilesWork(string name) {
	this->file_name = name;
}

void FilesWork::write_file(string user_text) {
	this->user_text = user_text;
	ofstream file(this->file_name);
	file<< user_text << std::endl;
}

void FilesWork::read_file() {
	ifstream ifile(file_name);
	while (getline(ifile, file_text)) {
		std::cout << file_text  << std::endl;
	}
}
void FilesWork::operator += (string text) {
	text = this->user_text + text;
	ofstream file(this->file_name, std::ios_base::app); // std::ios_base::app - Автоматически переставляет указатель текущего символа потока в конец.
	file << text;
	}

