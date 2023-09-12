// Tyuiu.NosovaVD.Sprint0.Task5.V4.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class Service4 : public ISprint0Task5
{
	virtual int Zadacha(float a, float b, float c) override 
	{
		return ((2 * a) * b / 100) * c * 1000;
	}
};
