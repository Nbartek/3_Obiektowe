#pragma once
#include <iostream>
#include<string>
class Exercise
{
private:
	static int number;
public:
	Exercise() {
	 number++;
	}
	std::string GetINfo() {
		return "Ilosc obiektow: " + number;
	}
	void static Hello() {
		std::cout << "heloo form teh other static method" << std::endl;
		std::cout << "Ilosc obiektow: " + std::to_string(number) << std::endl;
	}
	~Exercise() {
		number--;
	}
};

