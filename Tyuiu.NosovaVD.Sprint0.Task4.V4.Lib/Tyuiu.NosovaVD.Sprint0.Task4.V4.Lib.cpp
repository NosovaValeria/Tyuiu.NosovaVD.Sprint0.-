// Tyuiu.NosovaVD.Sprint0.Task4.V4.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.

class Service4 : public ISprint0Task4
{
	virtual int Calculate(int a, int b, int c, int d) override
	{
		return a * b + c * d;
	}
};