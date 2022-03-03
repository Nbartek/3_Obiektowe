// cw2_naOcene.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Kontener.h"

int main()
{
    Kontener dr;
    std::string zbior[] = {"Anna","Bartek","Filip","Adam","Grzegorz","mMrcin","Elzbieta","Bonawentura"};
    std::cout << zbior[5] << std::endl;
    int dl = 5;
    std::cout << dr.getSize(5) << std::endl;
}


