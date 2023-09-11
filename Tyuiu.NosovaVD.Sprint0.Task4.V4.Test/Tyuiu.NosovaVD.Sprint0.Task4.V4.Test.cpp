#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint0.Task4.V4.Lib/Tyuiu.NosovaVD.Sprint0.Task4.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task4* primer = new Service4();
			int a = 2;
			int b{ 3 };
			int c = 7;
			int d(4);
			int otvet = primer->Calculate(a, b, c, d);
			Assert::AreEqual(34, otvet);
		}
	};
}
