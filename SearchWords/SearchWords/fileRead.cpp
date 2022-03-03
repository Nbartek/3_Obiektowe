#include "fileRead.h"

using namespace std;


int fileRead::serch(int wordcount)
{
	plik.open("text.txt", ios::in);
	if (plik.is_open()) {
		while (getline(plik, tp)) {
			if (tp.find(wordcount) != string::npos) {
				line = tp;
			}
		}
	}
	plik.close();
	return 0;
}
