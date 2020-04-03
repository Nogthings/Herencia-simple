#pragma once
#include "Espada.h"
class EspadaHierro:public Espada
{
private:
	int damage;
public:
	
	EspadaHierro();

	EspadaHierro(string nombreEspada, int largo, int damage);
	void MostrarEspadaHierro();
};

