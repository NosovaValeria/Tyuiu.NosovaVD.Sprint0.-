// Tyuiu.NosovaVD.Sprint0.Task3.V0.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class ISprint0Task3V0 
{
public:
	virtual int Add(int a, int b, int c) = 0; 
	virtual int Subraction(int a, int b, int c) = 0;
};
class Service1  : public ISprint0Task3V0
{
	virtual int Add(int a, int b, int c) override  
	{
		return a + b + c;
	}
	virtual int Subraction(int a, int b, int c) override
	{
		return a - b - c;
	}
};
