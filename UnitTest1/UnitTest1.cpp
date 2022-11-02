#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.2/PR5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(2, 0, 1);
			Assert::AreEqual(t, -0.25000);
		}
	};
}
