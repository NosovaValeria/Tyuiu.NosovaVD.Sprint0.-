#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint0.Task2.V0.Lib/Tyuiu.NosovaVD.Sprint0.Task2.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task2V0* service = new Service();
			int a = 12;
			int b = 15;
			int c = service->Add(a, b);
			Assert::AreEqual(27, c);
		}

		TEST_METHOD(TestMethod2)
		{
			ISprint0Task2V0* service = new Service();
			int a = 10;
			int b = 5;
			int c = service->Add(a, b);
			Assert::AreEqual(15, c);
		}
	};
}
