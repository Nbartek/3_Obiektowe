#pragma once
#include "AbstractRutyny.h"
class Budowlaniec :
    public AbstractRutyny
{
	virtual void DefinujacePrzygotowanie() const {
		std::cout << "Jazda samochodem na budowe i zaladowanie sprzetu" << std::endl;
	};
	virtual void DefinujacaPraca() const {
		std::cout << "Prace budowlane, wyjazdy po sprzet" << std::endl;
	};
	virtual void DefinujacyOdpoczynek() const {
		std::cout << "Cwiczenia umyslowe, czytanie ksiazki, krzyzowki" << std::endl;
	};

	virtual void DodatkowyOpodczynek()const {
		std::cout << "Piwko" << std::endl;
	};
};

