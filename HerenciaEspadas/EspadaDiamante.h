#pragma once
#include "Espada.h"
class EspadaDiamante:public Espada
{
private:
	int damage;
public:
	EspadaDiamante();
	EspadaDiamante(string nombreEspada, int largo, int damage);
	void MostrarEspadaDiamante();
};

