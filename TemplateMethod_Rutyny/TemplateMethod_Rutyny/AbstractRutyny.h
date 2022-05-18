#pragma once
#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
/*
	Metoda bed¹ca szkieletem projektu o wzorcu internetowym
	Tworzy podstawowe funkcje które mog¹, musz¹ lub nie musz¹ byc nadpisane w klasach pochodnych

	Funkcja odpowiadaj¹ca za pobieranie wyniku wypisanego w konsoli
*/
class AbstractRutyny
{
public:
	void SaveFile(std::string zapis, AbstractRutyny* plik) {
		std::ofstream file(zapis);
		file << plik->Rutyna();
		file.close();
	}
	std::string Rutyna() const {
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
	std::string PodstawowaPrzygotowanie() const {
		return "		Obudzenie sie i przygotowanie sniadania\n";
	}
	std::string PodstawowaPraca() const {
		return "		Zarabianie pieniedzy w przedziale czasowym\n";
	}
	std::string PodstawoweOdpoczynek() const {
		return "		Odpoczynek po pracy i sporzycie jedzenia\n";
	}

	virtual std::string DefinujacePrzygotowanie() const = 0;
	virtual std::string DefinujacaPraca() const = 0;
	virtual std::string DefinujacyOdpoczynek() const = 0;

	virtual std::string DodatkowepPrzygotowanie()const {};
	virtual std::string DodatkowaPraca()const {};
	virtual std::string DodatkowyOdpoczynek()const {};
};


