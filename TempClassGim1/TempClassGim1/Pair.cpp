#include "Pair.h"
#include <cmath>

bool operator<(const Pair& p2, const Pair& p1) {
	return abs(p1.a - p1.b) < abs(p2.a - p2.b);
}
bool operator>(const Pair& p2, const Pair& p1) {
	return abs(p1.a - p1.b) > abs(p2.a - p2.b);
}
bool operator==(const Pair& p2, const Pair& p1) {
	return abs(p1.a - p1.b) == abs(p2.a - p2.b);
}