#pragma once
#include <vector>

#include "BaseClass.h"
#include "DerivedClassOne.h"
#include "DerivedClassTwo.h"
#include "NewCLass.h"
class Repo
{
private:
	std::vector<BaseClass*> data;
public:
	Repo() {
		//data.push_back(new BaseClass()); nie da sie poniewaz jest czysto wirtualna
		data.push_back(new DerivedClassOne());
		data.push_back(new DerivedClassTwo());
		data.push_back(new DerivedClassTwo());
		data.push_back(new DerivedClassTwo());
		//data.push_back(new NewCLass()); ni ma metody virtualnej
	}
	 std::vector<BaseClass*>& GetAll() {
		return data;
	}
	~Repo() {
		std::cout << "Czyszczenie data" << std::endl;
		for (BaseClass* item : data) {
			delete item;
			item = nullptr;
		}
	}
};


