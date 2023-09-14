#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint0.Task7.V4.Lib/Tyuiu.NosovaVD.Sprint0.Task7.V4.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest7
{
	TEST_CLASS(UnitTest7)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* service7 = new Service();
			int a = 235671;
			int b = 5;
			bool c = service7->Rezalt(a, b);
			Assert::AreEqual(true, c);
		}
		TEST_METHOD(TestMethod2)
		{
			ISprint0Task7* service7 = new Service();
			int a = 235671;
			int b = 8;
			bool c = service7->Rezalt(a, b);
			Assert::AreEqual(false, c);
		}
	};
}
