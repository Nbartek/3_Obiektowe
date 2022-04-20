#pragma once
#include "MyAbstractClass.h"
class FirstClass :
    public MyAbstractClass
{
    void RequiredOperation1() const {
        std::cout << "Operacja obowiazkowa z klasy First....\n";
    }
    void RequiredOperation2() const {
        std::cout << "Operacja obowiazkowa numer dwa z klasy First....\n";
    }
    void Hook1()const {
        std::cout << "Operacja hook1 z klassy firstclass";
    }
};

