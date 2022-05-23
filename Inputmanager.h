#pragma once
#include <iostream>
#include <stdlib.h>
#include "list.h"

class Inputmanager
{
public:
	Inputmanager();
	int Control, opcion;
	string eliminar;
	string completada;
	list_ lista;
	void run();
	void Show_main_menu();
	void set_option();
	void evaluate_main_menu_input();
};
