#pragma once
#include "BaseClass.h"
class DerivedClassTwo :
    public BaseClass
{
public:
    DerivedClassTwo() {};
    void ToOverride() {
        std::cout << "nadpisana w derived two"<<std::endl;
    }
};

