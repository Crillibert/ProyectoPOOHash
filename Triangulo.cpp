#include "Triangulo.h"
Triangulo::Triangulo()
{
	Nombre = "Triangulo";
	ID = Convert::ToChar(id++);
}
Triangulo::Triangulo(string Nombre, int base, string ID, int Altura, string Color)
{
	base = 0;
	Altura = 0;
}
int Triangulo::CalcArea()
{
	int h = sqrt(lado^2 - (base/2)^2);
	return ((base * h));
}
int Triangulo::CalcPerm()
{
	return (base + (lado*2));
}