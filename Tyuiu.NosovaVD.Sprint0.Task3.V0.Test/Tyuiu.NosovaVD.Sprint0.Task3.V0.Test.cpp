#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint0.Task3.V0.Lib/Tyuiu.NosovaVD.Sprint0.Task3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(TyuiuNosovaVDSprint0Task3V0Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3V0* date = new Service1();
			int a = 3;
			int b = 4;
			int c = 5;
			int d = date->Add(a, b, c);
			Assert::AreEqual(12, d);
		}
		TEST_METHOD(TestMethod2)
		{
			ISprint0Task3V0* date = new Service1();
			int a = 10;
			int b = 3;
			int c = 8;
			int d = date->Add(a, b, c);
			Assert::AreEqual(21, d);
		}
		TEST_METHOD(TestMethod3)
		{
			ISprint0Task3V0* date = new Service1();
			int a = 25;
			int b = 6;
			int c = 9;
			int d = date->Subraction(a, b, c);
			Assert::AreEqual(10, d);
		}
		TEST_METHOD(TestMethod4)
		{
			ISprint0Task3V0* date = new Service1();
			int a = 40;
			int b = 17;
			int c = 4;
			int d = date->Subraction(a, b, c);
			Assert::AreEqual(19, d);
		}
	};
}
