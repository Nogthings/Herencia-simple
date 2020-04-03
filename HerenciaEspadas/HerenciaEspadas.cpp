#include"Pch.h"
#include <iostream>

int main()
{
	EspadaHierro EspH("Espada de Hierro", 110, 4);
	EspH.MostrarEspadaHierro();
	cout << "========================================================" << endl;
	EspadaDiamante EspD("Espada de Diamante", 110, 35);
	EspD.MostrarEspadaDiamante();
}

