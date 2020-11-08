#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlaba52
{
	TEST_CLASS(UnitTestlaba52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double l = A(1,1,1);
			Assert::AreEqual(l, -0.3);
		}
	};
}
