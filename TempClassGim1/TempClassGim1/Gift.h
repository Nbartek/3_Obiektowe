#include <string>
#include <iostream>
#pragma once

class Gift
{
private:
	std::string name;
	std::string owner;
	double price;

public:
	Gift();
	Gift(std::string name, std::string owner, double price);
	std::string GetName() {
		return name;
	}
	std::string GetOwner() {
		return owner;
	}
	double GetPrice() {
		return price;
	}
	friend std::ostream& operator<<(std::ostream& s, const Gift& p1);
	friend bool operator<(const Gift& p2, const Gift& p1);
	friend bool operator>(const Gift& p2, const Gift& p1);
	friend bool operator==(const Gift& p2, const Gift& p1);
};

