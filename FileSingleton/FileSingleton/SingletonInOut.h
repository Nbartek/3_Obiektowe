#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
class SingletonInOut
{
private:
	std::string filename;
	SingletonInOut() {};
	~SingletonInOut() {};
	SingletonInOut(const SingletonInOut& s) {};
	void operator=(const SingletonInOut& s);
public:
	static SingletonInOut& GetInstance() {
		static SingletonInOut _instance;
		return _instance;
	}
	void setFileName(std::string filename) {
		this->filename = filename;
	}
	std::vector<std::string> GetFileContent() {
		std::ifstream sf;
		std::vector<std::string> result;
		sf.open(filename.c_str());
		if (sf.is_open()) {
			std::cin.ignore(256, '\n');
			std::string line;
			while (std::getline(sf, line)) {
				result.push_back(line);
			}
			return result;
		}
	}
	void SaveFile(std::string input) {
		std::ofstream sf;
		sf.open(filename.c_str());
		if (sf.is_open()) {
			std::cin.ignore(256, '\n');
			sf << input ;
		}
		sf.close();
	 }

};

