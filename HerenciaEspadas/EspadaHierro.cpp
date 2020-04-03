#include "Pch.h"
EspadaHierro::EspadaHierro()
{
}

EspadaHierro::EspadaHierro(string nombreEspada, int largo, int damage):Espada()
{
	this->damage = damage;
}

void EspadaHierro::MostrarEspadaHierro()
{
	MostrarInfo();
	cout << "Daño: " << damage << "PS" << endl;
}
