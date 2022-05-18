
#include "AbstractRutyny.h"
#include "Budowlaniec.h"
#include "Informatyk.h"
#include <iostream>

int main()
{
    AbstractRutyny* f2 = new Informatyk();
    f2->Rutyna();
    std::string plik;
    std::cin >> plik;
    f2->SaveFile(plik,f2);
    delete f2;
    f2 = nullptr;

}

