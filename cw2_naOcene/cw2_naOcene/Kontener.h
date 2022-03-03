#pragma once
#include <string>
#include <iostream>

class Kontener
{
private:
	int size;
	std::string data[];
public:
	Kontener();
	Kontener(std::string data[]);
	 std::string getMax(std::string data);
	 int getSize(int a) {
		 data[a].size();
			 return size;
	 }
	 void setValue(std::string data[]) {
		 this->data == data;
	 }
};

