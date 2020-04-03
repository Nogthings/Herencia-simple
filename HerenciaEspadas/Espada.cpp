#include "pch.h"
#include "Espada.h"
#include "pch.h"
#include "Espada.h"



Espada::Espada()
{
}

Espada::Espada(string nombreEspada, int largo)
{
	this->nombreEspada = nombreEspada;
	this->largo = largo;
}

void Espada::MostrarInfo()
{
	cout << "Nombre de la espada" << nombreEspada << endl;
	cout << "Largo de la espada " << largo << " cm" << endl;
}