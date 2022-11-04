#include "Rectangulo.h"
Rectangulo::Rectangulo()
{
	Nombre = "Rectangulo";
	ID = Convert::ToChar(id++);
}
Rectangulo::Rectangulo(string Nombre, string ID, string Color)
{

}
int Rectangulo::CalcArea()
{
	return (lado * lado1);
}
int Rectangulo::CalcPer()
{
	return (lado * 2 + lado1 * 2);
}
