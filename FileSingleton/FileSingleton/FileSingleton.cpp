// FileSingleton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SingletonInOut.h"

int main()
{
	SingletonInOut& s1 = SingletonInOut::GetInstance();
	std::string si = 
	s1.setFileName();
	s1.GetFileContent();
}

