#pragma once
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
class SearchText
{
private:
	bool contains(std::vector<char> vec, char elem)
	{
		bool result = false;
		if (find(vec.begin(), vec.end(), elem) != vec.end())
		{
			result = true;
		}
		return result;
	}
public:
	int CountChar(std::string text) {
		int result = text.length();
		return result;
	};
	int	CountNumbers(std::string text) {
		int length = text.length();
		int count = 0;
		for (int i = 0; i <= length; i++) {
			if (isdigit(text[i]))
				count++;
		}
		return count;
	};
	int	CountAllLetters(std::string text) {
		int length = text.length();
		int count = 0;
		for (int i = 0; i <= length; i++) {
			if (isalpha(text[i]))
				count++;
		}
		return count;
	};

	int	CountVowels(std::string text) {
		std::vector<char> vovels = { 'a','y','e','i','o','u' };
		int length = text.length();
		int count = 0;
		for (int i = 0; i <= length; i++) {
			if (contains(vovels, text[i]))
				count++;
		}
		return count;
	};
	int	CountSetLengthWords(int length, char text[]) {
		//std::vector<std::string> words;
		int lengthChar = strlen(text);
		char* next_token;
		char* tokens = strtok_s(text, " ,.", &next_token);

		int count = 0;
		while (tokens != NULL) {
			if (strlen(tokens) == length) {
				count++;
			}
			tokens = strtok_s(NULL, " ", &next_token);

		}
		return count;
	};
	int	CountTags(std::string text) {
		int length = text.length();
		int count = 0;
		std::string cuted;
		int dd = 0;
		for (int i = 0; i <= length; i++) {
			if (text[i] == '<') {
				if (text[i + 1] != ' ' || text[i + 1] != '=') {
					if (text.find('>')!=-1) {
						dd = text.find('>');
						cuted = text.substr(i, dd + 1);
						if (cuted.find('/') == std::string::npos) {
							cuted.insert(1, "/");
							dd = 0;
							if (text.find(cuted) != -1) {
								//dd = text.find(cuted);
								count++;
								cuted = "";
								
							}
						}
					};
				}

			}
		}
		return count;
	};

	std::string deleteTags(std::string text) {
		std::string modyfiedText;
		modyfiedText = text;
		int length = text.length();
		int dd = 0;
		int starter = 0;
		for (int i = 0; i <= length; i++) {
			if (text[i] == '<') {
				if (text[i + 1] != ' ' || text[i + 1] != '=') {
					if (modyfiedText.find(i,'>')) {
						starter = modyfiedText.find('<');
						dd = modyfiedText.find('>');
						modyfiedText.erase(starter,dd-starter+1);

						starter = 0;
							dd = 0;

					};
				}

			}
		}
		return modyfiedText;
	}
};

