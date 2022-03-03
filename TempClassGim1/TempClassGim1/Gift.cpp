#include "Gift.h"
Gift::Gift() {
	name = "noname",
		owner = "not owned",
		price = 0;
}
Gift::Gift(std::string name, std::string owner, double price) {
	this->name = name;
	this->owner = owner;
	this->price = price;
}

std::ostream& operator<<(std::ostream& s, const Gift& p1)
{
	return s << " (" << p1.name << " , " << p1.owner << " , " << p1.price << ") ";
}

bool operator<(const Gift& p2, const Gift& p1)
{
	return abs(p1.price) < abs(p2.price);
}

bool operator>(const Gift& p2, const Gift& p1)
{
	return abs(p1.price) > abs(p2.price);
}

bool operator==(const Gift& p2, const Gift& p1)
{
	return abs(p1.price) == abs(p2.price);
}
