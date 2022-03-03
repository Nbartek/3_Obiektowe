#pragma once
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <iostream>
class GenerNumber
{
private:
	
public:
	
	static int GenerEven() {
		srand(time(0));
		int result = rand()*2;
			return result;
	}
	static std::vector<int> GetEvenNumbers(size_t size) {
		std::vector<int> result;
		for (size_t i = 0; i < size; i++) {
			result.push_back(GenerEven());
		}
		return result;
	}
	static int GetDividedBy(int divisor) {
		srand(time(0));
		int result = rand()*2;
		return result;
	}
	// 64 8 
	static int GenPrimeNumbers() {
		static int RecursionCount=0;
		int number = rand()%100;
		number++;
		long long kwadrat = sqrt(number);
		int i = 2;
		while (i <= kwadrat) {
			if (!(number % i++)) {
				if (RecursionCount == 20) {
					return -1;
					break;
				}
				else if (RecursionCount < 20) {
					RecursionCount++;
					GenPrimeNumbers();
					
				}
				
			}

		}
		return number;

	}
	//generatro liczb pierwszych
	static std::vector<int> GetPrimalFrom(int low, int up) {
		std::vector<int> result;
		if (low >= up) return result;
		result.push_back(2);
	}
};

