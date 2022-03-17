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
		std::vector<std::string> result;
		sf.open(filename.c_str());
		if (sf.is_open()) {
			std::cin.ignore(256, '\n');
			std::string line;
			while (std::getline(sf, line)) {

			}
		}
	}
	std::vector<std::string> StringToWords(std::string text) {
		std::vector<std::string> result;
		int length = text.length();
			int count = 0;
			std::string cuted;
			int dd = 0;
			for (int i = 0; i <= length; i++) {
				if (text[i] == ' ') {
						if (text.find(' ') != -1) {
							dd = text.find(' ',i+1);
							cuted = text.substr(i, dd + 1);
							if (cuted.find('/') == std::string::npos) {
								cuted.insert(1, "/");
								dd = 0;
								if (text.find(cuted) != -1) {
									//dd = text.find(cuted);
									count++;
									cuted = "";
		//dokoñcz
								}
							}
						};
					
		
				}
			}
			return result;
	}

};
