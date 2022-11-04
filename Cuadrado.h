#pragma once
#include "Figura.h"
public class Cuadrado:
	public Figura
{
public:
    Cuadrado();
    Cuadrado(string Nombre, string  ID, string Color);
    int CalcularArea();
    int CalcularPerimetro();
};

