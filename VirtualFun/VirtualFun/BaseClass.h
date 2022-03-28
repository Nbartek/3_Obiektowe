#pragma once
#include <iostream>
class BaseClass
{
protected:
	int value{ 0 };
public:
	BaseClass(){}
	BaseClass(int value) {
		this->value = value;
	}
	void ToOerirde() {
		std::cout << "Cos tam cos ta" << std::endl;
	}
};

