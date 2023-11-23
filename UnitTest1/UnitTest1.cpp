#include "pch.h"
#include "CppUnitTest.h"
#include "..//goodlab13.2.2/lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 2.0;
			double b = 3.0;

			// Act
			double result = h(a, b);

			// Assert
			Assert::AreEqual(result, 3.15385, 0.0001);
		}
	};
}
