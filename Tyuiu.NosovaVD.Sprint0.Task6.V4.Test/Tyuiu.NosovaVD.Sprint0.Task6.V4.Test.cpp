#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint0.Task6.V4.Lib/Tyuiu.NosovaVD.Sprint0.Task6.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* service5 = new Service5();
			float x = 3.5;
			int y = 3;
			float z = service5->Calculate(x, y)/1000.0;
			float w = 1.75;
			Assert::AreEqual(w, z);
		}
	};
}
