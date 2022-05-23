#include "list.h"

using namespace std;

    list_::list_() {
	tarea = ' ';
	i = NULL;
	numerador = 1;
	numero_tarea = NULL;
}

void list_::agregar_tarea() {
	Tareas.push_back(tarea);
}

void list_::eliminar_tarea() {
	for (auto i = Tareas.begin(); i != Tareas.end(); i++) { //The auto keyword is simply asking the compiler to deduce the type of the variable from the initialization.
		if (numerador == numero_tarea) {
			i = Tareas.erase(i); // El metodo erase devuelve un puntero al nodo siguiente del que se ha eliminado en la lista
			break;
		}
		numerador++;
	}
	numerador = 1;
}

void list_::imprimir_lista_de_tareas() {
	system("cls");
	cout << "\n\tLISTA DE TAREAS\n\n";
	for (auto i = Tareas.begin(); i != Tareas.end(); i++) {
		cout << numerador << ". " << *i << endl;
		numerador++;
	}
	numerador = 1;
	cout << "\n\n\n";
	tarea = _getch();
}

void list_::marcar_como_completada() {
	for (auto i = Tareas.begin(); i != Tareas.end(); i++) {
		if (numerador == numero_tarea) {
			*i = *i + "...COMPLETADO";
			break;
		}
		numerador++;
	}
	numerador = 1;
}
