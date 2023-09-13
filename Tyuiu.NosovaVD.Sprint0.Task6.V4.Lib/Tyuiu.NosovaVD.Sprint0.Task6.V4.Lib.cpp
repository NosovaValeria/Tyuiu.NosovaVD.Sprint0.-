// Tyuiu.NosovaVD.Sprint0.Task6.V4.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class Service5 : public ISprint0Task6 
{
	virtual int Calculate(float x, int y) override 
	{
		return (5 * x) / (7 + y) * 1000.0;
	}
};
