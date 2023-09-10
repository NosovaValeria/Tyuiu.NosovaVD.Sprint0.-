#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint0.Task3.V0.Lib/Tyuiu.NosovaVD.Sprint0.Task3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3* date = new Service1();
			int a = 3;
			int b = 4;
			int c = 5;
			int d = date->SummV3(a, b, c);
			Assert::AreEqual(12, d);
		}
		TEST_METHOD(TestMethod2)
		{
			ISprint0Task3* date = new Service1();
			int a = 10;
			int b = 3;
			int c = 8;
			int d = date->SummV3(a, b, c);
			Assert::AreEqual(21, d);
		}
		TEST_METHOD(TestMethod3)
		{
			ISprint0Task3* date = new Service1();
			int a = 25;
			int b = 6;
			int c = 9;
			int d = date->SummV3(a, b, c);
			Assert::AreEqual(40, d);
		}
		TEST_METHOD(TestMethod4)
		{
			ISprint0Task3* date = new Service1();
			int a = 40;
			int b = 17;
			int c = 4;
			int d = date->SummV3(a, b, c);
			Assert::AreEqual(61, d);
		}
	};
}
