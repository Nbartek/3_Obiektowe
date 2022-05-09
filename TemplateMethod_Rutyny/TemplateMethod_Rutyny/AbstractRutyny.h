#pragma once
#include <iostream>
class AbstractRutyny
{
public:
	void Rutyna() const {
		this->PodstawowaPrzygotowanie();
		this->DefinujacePrzygotowanie();
		this->DodatkowepPrzygotowanie();

		this->PodstawowaPraca();
		this->DefinujacaPraca();
		this->DodatkowaPraca();

		this->PodstawoweOdpoczynek();
		this->DodatkowyOdpoczynek();
		this->DefinujacyOdpoczynek();
	}
protected:
	void PodstawowaPrzygotowanie() const {
		std::cout << "		Obudzenie sie i przygotowanie sniadania\n";
	}
	void PodstawowaPraca() const {
		std::cout << "		Zarabianie pieniedzy w przedziale czasowym\n";
	}
	void PodstawoweOdpoczynek() const {
		std::cout << "		Odpoczynek po pracy i sporzycie jedzenia\n";
	}

	virtual void DefinujacePrzygotowanie() const = 0;
	virtual void DefinujacaPraca() const = 0;
	virtual void DefinujacyOdpoczynek() const = 0;

	virtual void DodatkowepPrzygotowanie()const {};
	virtual void DodatkowaPraca()const {};
	virtual void DodatkowyOdpoczynek()const {};
};

