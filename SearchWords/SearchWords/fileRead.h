#include <fstream>
#include<string>
#pragma once
using namespace std;
class fileRead
{
	string line;
	fstream plik;
	string tp;
public:
	int serch(int wordcount);
};

