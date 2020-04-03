#pragma once
#include "Espada.h"
#include "Pch.h"

class Espada
{
private:
	string nombreEspada;
	int largo;
public:
	Espada();
	Espada(string nombreEspada, int largo);
	void MostrarInfo();
};