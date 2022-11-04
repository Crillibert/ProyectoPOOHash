#pragma once
#include "Figura.h"
public class Triangulo:
	public Figura
{
protected:
public:
	int Altura;
	Triangulo();
	Triangulo(string Nombre, int base, string ID, int Altura, string Color);
	int CalcArea();
	int CalcPerm();
};

