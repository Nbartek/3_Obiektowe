#pragma once
#include <iostream>
#include <tuple>
#include <cmath>
struct Pair
{
	int a, b;

	friend std::ostream& operator<<(std::ostream& s, const Pair& p1) {
		return s << " (" << p1.a << "," << p1.b << ") ";
	}
	friend bool operator<(const Pair& p2, const Pair& p1);
	friend bool operator>(const Pair& p2, const Pair& p1);
	friend bool operator==(const Pair& p2, const Pair& p1);
};
//bool operator<(const Pair& p2, const Pair& p1) {
//	return abs(p1.a - p1.b) < abs(p2.a - p2.b);
//}
//bool operator>(const Pair& p2, const Pair& p1) {
//	return abs(p1.a - p1.b) > abs(p2.a - p2.b);
//}
//bool operator==(const Pair& p2, const Pair& p1) {
//	return abs(p1.a - p1.b) == abs(p2.a - p2.b);
//}


