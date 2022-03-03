#include <iostream>
#include <cstdlib>
#include <string>
#include "Container.h"
#include <vector>
#include <algorithm>
#include "Pair.h"
#include "Gift.h"
using namespace std;

void Ex1();
void Ex2();

int main() {
	Ex1();
	Ex2();
	return EXIT_SUCCESS;
}
void Ex2() {
	Gift p1{"Sokolik", "Arnold",21.21 };
	Gift p2{ "Grzebien", "Zofia",4.01 };
	Gift p3{ "Tramwajek", "Rusvelt",1234.21 };
	vector<Gift> dd{ p1,p2,p3 };
	Container<Gift>* prezenty = new Container<Gift>(dd);
	Container<Gift> mySort = prezenty->GetSort();
	prezenty->ShowAll();
	cout << "Posortowane ceny::::::" << endl;
	mySort.ShowAll();
}
void Ex1() {
	vector<string> v1{"ala", "mela", "Bella", "ciela"};
	Pair p1{ 12,6 };
	Pair p2{ 3,67 };
	Pair p3{ 44,67 };
	vector<Pair> pp {p1, p2, p3};
	vector<int> numbers{ 12,6,8,9,0,23 };//na stosie ->w momencie kompliacji
	Container<string>* c1 = new Container<string>(v1);//na stercie przy uruchomieniu
	Container<int> liczby(numbers);
	Container<Pair>*  pary = new Container<Pair>(pp);
	//(*c1).ShowAll();
	//c1->ShowAll();
	pary->ShowAll();

	Container<Pair> mySort = pary->GetSort();
	delete c1;
	cout << "Posortowane pary::::::" << endl;
	mySort.ShowAll();
	cout << pp[0] << " < " << pp[1] << (pp[0] < pp[1]) << endl;
	c1 = nullptr;
	
	if(c1!=nullptr) {
		string elem = "jeszcze jeden element";
		c1->AddNew(elem);
		c1->ShowAll();
	}else {
		cout << "dsfsd fsd f";
	}

}