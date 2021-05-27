#include "pch.h"
#include "CppUnitTest.h"
#include "../exampractice/exampractice.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethodsumOfRange)
		{
			//Arrange
			int startVal = 1, endVal = 5, result;
			//Act
			result = sumOfRange(startVal, endVal);
			//Assert
			Assert::AreEqual(15, sumOfRange(1, 5));
		}
	};
}
