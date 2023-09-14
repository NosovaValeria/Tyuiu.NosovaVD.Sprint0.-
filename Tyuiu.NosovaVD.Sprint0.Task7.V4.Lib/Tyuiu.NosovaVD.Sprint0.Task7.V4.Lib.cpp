// Tyuiu.NosovaVD.Sprint0.Task7.V4.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class Service : public ISprint0Task7
{
	virtual bool Rezalt(int a, int b) override
	{
		int a1 = a / 100000;
		int a2 = (a / 10000) % 10;
		int a3 = (a / 1000) % 10;
		int a4 = (a / 100) % 10;
		int a5 = (a / 10) % 10;
		int a6 = a % 10;
		bool p = (a1 == b) || (a2 == b) || (a3 == b) || (a4 == b) || (a5 == b) || (a6 == b);
		return p;
	}
};
