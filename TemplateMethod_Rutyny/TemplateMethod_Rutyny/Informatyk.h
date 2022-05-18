#pragma once
#include "AbstractRutyny.h"
class Informatyk :
    public AbstractRutyny
{
	virtual std::string DefinujacePrzygotowanie() const {
		return "Wlanczenie komputera i przygotowanie srodowiska pracy\n";
	};
	virtual std::string DefinujacaPraca() const {
		return "Pisanie kodu i testy programow\n";
	};
	virtual std::string DefinujacyOdpoczynek() const {
		return "Silownia, basen, cwiczenia itp.\n";
	};

	virtual std::string DodatkowepPrzygotowanie()const {
		return "Zrobienie sobie kawusi\n";
	};
	virtual std::string DodatkowaPraca()const {
		return "Praca po godzinach\n";
	};
};

