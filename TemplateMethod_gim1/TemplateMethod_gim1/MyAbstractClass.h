#pragma once
#include <iostream>
class MyAbstractClass
{
public:
	void TemplateMethod() const {
		this->BaseOperation1();
		this->RequiredOperation1();
		this->BaseOperation2();
		this->Hook1();
		this->RequiredOperation2();
		this->BaseOperation3();
		this->Hook2();
	}
protected:
	void BaseOperation1() const {
		std::cout << "Klasa pierwsza abstarakcyjna czynnosc 1\n";
	}
	void BaseOperation2() const {
		std::cout << " abstarakcyjna czynnosc 2\n";
	}
	void BaseOperation3() const {
		std::cout << " \n";
	}
	virtual void RequiredOperation1() const = 0;
	virtual void RequiredOperation2() const {
		std::cout << "Obowiazkowa operacja 2" << std::endl;
	}
	virtual void Hook1()const {};
	virtual void Hook2()const {};
};

