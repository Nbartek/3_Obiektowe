#include <iostream>
#include <string>
using namespace std;


template<typename T> //szablon funkcji
T Add(T a, T b) {
	return a + b;
}
template<class D>
void Show(D data) {
	cout << data << endl;
}
template<typename T>
T Multiple(T a, T b) {
	return a*b;
}
struct Point2d {
	int x;
	int y;
	//przeci¹¿yæ operator + dla tego typu
	friend ostream& operator<<(std::ostream& s, const Point2d& p1) {	
		return s<<" ("<<p1.x<<", "<<p1.y<<") ";
	}
	friend Point2d operator+(const Point2d& p1, const Point2d& p2) {
		Point2d result;
		result.x = p1.x + p2.x;
		result.y = p1.y + p2.y;
		return result;
	}
};
int main() {
	//cout << Add<int>(3, 8) << endl;
	//cout << Multiple<double>(3.2, 5) << endl;
	Point2d p1{4,5};
	Point2d p2{10,7};


	cout << p1<<" + "<<p2<<" = "<<Add<Point2d>(p1, p2) << endl;
	//cout << Multiple<string>("dgg","dsgs") << endl; brak mno¿enia dla stringa
	//Show<string>("Kota ala ma");
	return 0;
}