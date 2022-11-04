#pragma once
#include "Figura.h"
public class Rectangulo :
	public Figura
{
protected:
public:
	Rectangulo();
	Rectangulo(string Nombre, string ID, string Color);
	int CalcArea();
	int CalcPer();
};

