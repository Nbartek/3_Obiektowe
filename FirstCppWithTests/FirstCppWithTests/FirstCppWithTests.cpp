// FirstCppWithTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <cstdlib>
#include <iostream>
#include "GenerNumber.h"
#include "GenerNumber.cpp"
#include "SearchText.h"

using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    srand(time(0)); 
    SearchText dd;
    std::string text = "<div><a> ala ma <p>kot</p> <a></a></div>";
    std::cout << text << endl;
    std::cout << dd.deleteTags(text) << endl;
    std::cout << GenerNumber::GenPrimeNumbers() << endl;
    return EXIT_SUCCESS;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
