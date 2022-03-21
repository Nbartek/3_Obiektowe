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
	std::vector<std::string> GetFileByWords() {
		std::ifstream sf;
		int dd;
		std::string cuted;
		std::vector<std::string> result;
		sf.open(filename.c_str());
		if (sf.is_open()) {
			std::cin.ignore(256, '\n');
			std::string line;
			int length;
			while (std::getline(sf, line)) {
				line.insert(0,1, ' ');
				line.append(" ");
				length = line.length();
				for (int i = 0; i <= length; i++) {
					if (line[i] == ' ') {
						if (line.find(' ',i+1) != -1) {
							dd = line.find(' ', i + 1);
							cuted = line.substr(i, dd+1-i);
							std::cout << cuted << std::endl;
							if (line.find(cuted) != -1) {								
								result.push_back(cuted);
								cuted = "";
								
							}

						};


					}
				}
				
			}
			return result;
		}
	}
	std::vector<std::string> CountOccurenceOfWords() {

	}

};
