#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Calculator/Calc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			int addNum = addition(5, 2);
			Assert::AreEqual(7 , addNum);

		}
		TEST_METHOD(TestMethod2)
		{
			// TODO: Your test code here

			int subNum = subtract(5, 2);
			Assert::AreEqual(3, subNum);
		}
		TEST_METHOD(TestMethod3)
		{
			// TODO: Your test code here

			int divNum = division(6, 2);
			Assert::AreEqual(3, divNum);
		}
		TEST_METHOD(TestMethod4)
		{
			// TODO: Your test code here

			int multiNum = multiply(6, 2);
			Assert::AreEqual(12, multiNum);
		}

	};
}