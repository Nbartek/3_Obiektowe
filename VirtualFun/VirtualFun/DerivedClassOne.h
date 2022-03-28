#pragma once
#include "BaseClass.h"
class DerivedClassOne :
    public BaseClass
{
    DerivedClassOne() {};
    void ToOverride() {
    std::cout << "Nadpisana w klasie derived one" << std::endl;
    }
};

