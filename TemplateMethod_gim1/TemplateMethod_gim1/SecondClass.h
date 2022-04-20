#pragma once
#include "MyAbstractClass.h"
class SecondClass :
    public MyAbstractClass
{
    void RequiredOperation1() const {
        std::cout << "Operacja obowiazkowa z klasy second-....\n";
    }
    void RequiredOperation2() const {
        std::cout << "Operacja obowiazkowa numer dwa z klasy second....\n";
    }
    void Hook1()const {
        std::cout << "Operacja hook1 z klassy secodnd ";
    }
};

