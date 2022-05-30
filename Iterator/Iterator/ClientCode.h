#include <iostream>
#include <string>
#include <vector>
#include "Container.h"
#include "Iterator.h"
#include "Data.h"
#pragma once
class ClientCode
{
	std::cout << "=============iterator z intem==============" << std::endl;
	Container<int> cont;

	for (int i = 0; i < 10; i++) {
		cont.Add(i);
	}

	Iterator<int, Container<int>> *it->cont.CreatIterator(){
		for (it->First(); !it->IsDone(); it->Next()) {
			std::cout << *it - < Current() << std::endl;
		}
	}
	Container<Data> cont2;
	Data  a(100), b(1000), c(10000);
	cont2.Add(a);
	cont2.Add(b);
	cont2.Add(c);

};

