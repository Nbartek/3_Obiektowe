#include <iostream>
#include <string>
#include <cstdlib>
#include "Item.h"
#include "Stack.h"
#include <vector>
#include "StackFifo.h"

using namespace std;
void Cw1();
void Cw2();
void Cw3();
int main() {
	/*Item* i1 = new Item();
	cout << i1;
	Item* i2 = new Item("nowy element", i1);
	cout << i2;

	delete i1;
	delete i2;
	i1 = nullptr;
	i2 = nullptr;*/
	//Cw1();
	//Cw2();
	Cw3();
	return 0;
}
void Cw3(){
	StackFifo sf1;
	sf1.Push(new Item("jeden", nullptr));
	sf1.Push(new Item("dwa", nullptr));
	sf1.Push(new Item("trzy", nullptr));
	sf1.Push(new Item("cztery", nullptr));
	sf1.Push(new Item("piec", nullptr));
	cout << sf1;
	cout << "zdjencie z stosu" << endl;
	Item* pobrany = sf1.Pop_back();
	cout << pobrany;
	cout << "Reszta stosu....." << endl;
	cout << sf1;
	delete pobrany;
	pobrany = nullptr;
}
void Cw2() {
	vector<string> imiona{ "Anna","Monika","Tomasz","Gerwazy","Urszula" };
	vector<string> reversImiona;
	//utworzyc stos z imionami
	//drugi wektor imiona osttni jako pierwszy
	Stack s1;
	for (string imie : imiona) {
		s1.Push(new Item(imie,nullptr));
	}
	cout << s1;
	Item* it = nullptr;
	while (s1.GetTop()!=nullptr)
	{
		it = s1.Pop();
		reversImiona.push_back(it->getValue());
		delete it;
	}
	cout << "==========================" << endl;
	for (string imie : reversImiona) {
		cout << imie << endl;
	}
}
void Cw1() {
	Stack s1;
	s1.Push(new Item("pierwszy", nullptr));
	s1.Push(new Item("drugi", nullptr));
	s1.Push(new Item("trzeci", nullptr));
	s1.Push(new Item("czwarty", nullptr));
	cout << s1;
	cout << "Zdejmowanie ze stosu...." << endl;
	Item* pobrany = s1.Pop();
	cout << pobrany << "to element ze stosu" << endl;
	cout << " =====================================\n";

	cout << s1;
	delete pobrany;
	pobrany = nullptr;
}