#pragma once
#include <list>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;

template <typename t> t set_tarea() {
	t tarea_ = " ";
	system("cls");
	cout << "Ingrese el nombre de la tarea: ";
	cin.ignore();
	getline(cin, tarea_);
	return tarea_;
}
template <typename t> int set_numero_tarea(t cadena) {
	int Num_tarea = 0;
	system("cls");
	cout << "Ingresa el numero de la tarea que deseas " << cadena << ": ";
	cin >> Num_tarea;
	return Num_tarea;
}

class list_ {
public:
	list_();
	list <string> Tareas;
	int* i;
	int numerador, numero_tarea;
	string tarea;
	void agregar_tarea();
	void eliminar_tarea();
	void imprimir_lista_de_tareas();
	void marcar_como_completada();
	list_& operator ++() {
		agregar_tarea();
		return *this;
	}
	list_& operator --() {
		eliminar_tarea();
		return *this;
	}
	list_ operator ++ (int) {
		list_ copy_list = *this;
		copy_list.agregar_tarea();
		return copy_list;
	}
	list_ operator -- (int) {
		list_ copy_list = *this;
		copy_list.eliminar_tarea();
		return copy_list;
	}
};
