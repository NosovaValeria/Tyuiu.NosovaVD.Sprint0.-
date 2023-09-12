#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint0.Task5.V4.Lib/Tyuiu.NosovaVD.Sprint0.Task5.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* service4 = new Service4();
			float a = 67;
			float b = 8.5;
			float c = 6.5;
			float d = service4->Zadacha(a,b,c) / 1000.0;
			float res = 74.035;
			Assert::AreEqual(res, d);
		}
	};
}
