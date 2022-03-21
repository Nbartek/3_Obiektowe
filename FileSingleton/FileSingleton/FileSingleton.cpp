// FileSingleton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SingletonInOut.h"
#include <string>
using namespace std;
int main()
{
	std::string name;
	std::string si;
	SingletonInOut& s1 = SingletonInOut::GetInstance();
	cout << "Podaj nazwe pliku: ";
	cin >> name;
	name.append(".txt");
	//cout << "Co chcec wpisac do pliku: " << endl;
	//cin >> si;
	//getline(cin, si);
	//cout << si << endl;
	//string al = "ala ma kota";
	s1.setFileName(name);
	//s1.GetFileContent();
	//s1.SaveFile(si);
	vector<string> byWords = s1.GetFileByWords();
	vector<string> byLine = s1.GetFileContent();
	//cout << al.substr(4, 7) << endl;;

}

