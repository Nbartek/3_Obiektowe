#pragma once
#include <iostream>
#include <string>
class MySingelton
{
private:
	int number{ 8 };
	std::string text{ "jakies text" };
	MySingelton(){}
	~MySingelton(){}
	MySingelton(const MySingelton& s){}
	void operator=(const MySingelton& s);
public:
	static MySingelton& GetInstance() {
		static MySingelton _instance;
		return _instance;
	}
	void InfoFromSingelton() {
		std::cout << "Hello form singlton" << std::endl;
		std::cout << "number= " << number << " text = " << text << std::endl;
	}
	void SetNumber(int number) {
		this->number = number;
	}
	void SetText(std::string text) {
		this->text = text;
	}

};

