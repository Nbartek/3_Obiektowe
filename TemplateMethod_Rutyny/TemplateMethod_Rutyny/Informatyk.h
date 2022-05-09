#pragma once
#include "AbstractRutyny.h"
class Informatyk :
    public AbstractRutyny
{
	virtual void DefinujacePrzygotowanie() const {
		std::cout << "Wlanczenie komputera i przygotowanie srodowiska pracy"<<std::endl;
	};
	virtual void DefinujacaPraca() const {
		std::cout << "Pisanie kodu i testy programow" << std::endl;
	};
	virtual void DefinujacyOdpoczynek() const {
		std::cout << "Silownia, basen, cwiczenia itp." << std::endl;
	};

	virtual void DodatkowepPrzygotowanie()const {
		std::cout << "Zrobienie sobie kawusi" << std::endl;
	};
	virtual void DodatkowaPraca()const {
		std::cout << "Praca po godzinach" << std::endl;
	};
};

