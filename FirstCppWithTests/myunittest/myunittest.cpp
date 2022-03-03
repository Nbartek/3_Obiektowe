#include "pch.h"
#include "CppUnitTest.h"
#include "../FirstCppWithTests/GenerNumber.h"
#include "../FirstCppWithTests/SearchText.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace myunittest
{
	TEST_CLASS(MyUnitTest)
	{
	public:
		
		//TEST_METHOD(Even_Test)
		//{
		//	GenerNumber gn;
		//	int ff = gn.GenerEven();
		//	Assert::IsTrue(ff % 2 == 0);
		//}
		//TEST_METHOD(Even_Test_Static) {
		//	int ff = GenerNumber::GenerEven();
		//	Assert::IsTrue(ff % 2 == 0);
		//}
		//TEST_METHOD(Thisame) {
		//	int ff = GenerNumber::GenerEven();
		//	int dd = rand();
		//	Assert::IsTrue(ff != dd);
		//}
		//TEST_METHOD(Thisame_vector_edition) {
		//	std::vector<int> result = GenerNumber::GetEvenNumbers(3);
		//	for (size_t i = 0; i < result.size(); i++) {
		//				Assert::IsTrue(result[1] % 2 == 0);
		//	}
		//	
		//}
		//TEST_METHOD(GetDivided) {
		//	int divider = 6;
		//	int result = GenerNumber::GetDividedBy(divider);
		//		Assert::IsTrue(result % divider == 0);


		//}
		//TEST_METHOD(GenPrimeNumbers_Test) {
		//	srand(time(0));
		//	GenerNumber prim;
		//	std::vector<int> prime = {-1, 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97 };
		//	int dd = prim.GenPrimeNumbers();
		//	Assert::IsTrue(std::find(prime.begin(), prime.end(), dd) != prime.end());
		//}

		TEST_METHOD(CountCharacters) {
			std::string text = "qwert y7ot";
				SearchText gg;
				int dd = gg.CountChar(text);
				Assert::IsTrue(dd == 10);
		}
		TEST_METHOD(CountNUmbers) {
			std::string text = "qwert y7ot";
			SearchText gg;
			int dd = gg.CountNumbers(text);
			Assert::IsTrue(dd == 1);
		}
		TEST_METHOD(CountAllLeters) {
			std::string text = "qwert y7ot";
			SearchText gg;
			int dd = gg.CountAllLetters(text);
			Assert::IsTrue(dd == 8);
		}
		TEST_METHOD(CountVowels) {
			std::string text = "qwert y7ot";
			SearchText gg;
			int dd = gg.CountVowels(text);
			Assert::IsTrue(dd == 3);
		}
		TEST_METHOD(CountLengthOfWords) {
			char text[] = "ala maa kot a";
			int z = 3;
			SearchText gg;
			int dd = gg.CountSetLengthWords(z,text);
			Assert::IsTrue(dd == 3);
		}
		//TEST_METHOD(COuntTags) {
		//	std::string text = "<ala><div><a> <ala> ma <p>kot</p> a</a></div>";
		//	SearchText gg;
		//	int dd = gg.CountTags(text);
		//	Assert::IsTrue(dd == 3);
		//}
		TEST_METHOD(DeleteTags) {
			std::string text = "<div><a> ala ma <p>kot</p> <a></a></div>";
			SearchText gg;
			std::string dd = gg.deleteTags(text);
			Assert::IsTrue(dd ==" ala ma kot a");
		}
	};
}
