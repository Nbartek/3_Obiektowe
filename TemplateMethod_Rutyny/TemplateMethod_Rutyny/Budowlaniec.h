#pragma once
#include "AbstractRutyny.h"
class Budowlaniec :
    public AbstractRutyny
{
	virtual std::string DefinujacePrzygotowanie() const {
		return "Jazda samochodem na budowe i zaladowanie sprzetu\n";
	};
	virtual std::string DefinujacaPraca() const {
		return "Prace budowlane, wyjazdy po sprzet\n";
	};
	virtual std::string DefinujacyOdpoczynek() const {
		return "Cwiczenia umyslowe, czytanie ksiazki, krzyzowki\n";
	};

	virtual std::string DodatkowyOpodczynek()const {
		return "Piwko\n" ;
	};
};

