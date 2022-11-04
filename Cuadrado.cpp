#include "Cuadrado.h"
Cuadrado::Cuadrado()
{
	Nombre = "Cuadrado";
	ID = "2.";
}
Cuadrado::Cuadrado(string Nombre, string  ID, string color)
{

}

int Cuadrado::CalcularArea()
{
	return (lado * lado);
}

int Cuadrado::CalcularPerimetro()
{
	return (lado *4);
}