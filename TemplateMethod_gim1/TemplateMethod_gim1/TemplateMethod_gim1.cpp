// TemplateMethod_gim1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include "FirstClass.h"
#include "SecondClass.h"
//#include "MyApstractClass"

int main()
{
    MyAbstractClass* f2 = new SecondClass();
    FirstClass* f1 = new FirstClass();
    f1->TemplateMethod();
    std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    f2->TemplateMethod();

    delete f2;
    delete f1;
    f1 = nullptr;
    f2 = nullptr;
    std::cout << "Hello World!\n";
}
