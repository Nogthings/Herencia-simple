#include "EspadaDiamante.h"
#include"Espada.h"

EspadaDiamante::EspadaDiamante()
{
}

EspadaDiamante::EspadaDiamante(string nombreEspada, int largo, int damage):Espada()
{
	this->damage = damage;
}

void EspadaDiamante::MostrarEspadaDiamante()
{
	MostrarInfo();
	cout << "Daño: " << damage << "PS" << endl;
}
