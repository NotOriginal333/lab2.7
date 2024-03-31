#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.7/Date.h"
#include "../lab2.7/Date.cpp"
#include "../lab2.7/Goods.h"
#include "../lab2.7/Goods.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Date today(2024, 3, 1);
			Date dateOfBirth("2000.12.31");
			int test = today.getYear();
			Assert::AreEqual(2024, test);
			test = dateOfBirth.getDay();
			Assert::AreEqual(31, test);
		}
	};
}
