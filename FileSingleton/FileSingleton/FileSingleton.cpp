// FileSingleton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SingletonInOut.h"

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
	s1.setFileName(name);
	//s1.GetFileContent();
	//s1.SaveFile(si);
	vector<string> byWords = s1.GetFileByWords();
	vector<string> byLine = s1.GetFileContent();

}

