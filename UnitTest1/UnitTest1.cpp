#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1/6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s;
			s = Sum(int* a,  int size);
			Assert::AreEqual(s, -126);
		}
	};
}
