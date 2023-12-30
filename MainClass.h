#pragma once
#include <iostream>

class  FilesWork {
private:
	std::string file_name, user_text, file_text;
public:

	FilesWork(std::string name);

	void write_file(std::string user_text);

	void read_file();

	void operator += (std::string text);
	

	~FilesWork() {}
};