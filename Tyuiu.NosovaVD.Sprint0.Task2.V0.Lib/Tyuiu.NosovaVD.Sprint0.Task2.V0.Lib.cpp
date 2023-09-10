// Tyuiu.NosovaVD.Sprint0.Task2.V0.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service :public ISprint0Task2V0
{
	virtual int Add(int a, int b) override
	{
		return a + b; 
	}
};
