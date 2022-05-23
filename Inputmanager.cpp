#include "Inputmanager.h"

using namespace std;

Inputmanager::Inputmanager() {
	Control = 1;
	opcion = NULL;
	eliminar = "eliminar";
	completada = "marcar como completada";
}

void Inputmanager::run() {
	while (Control) {
		Show_main_menu();
		set_option();
		evaluate_main_menu_input();
	}
}

void Inputmanager::Show_main_menu() {
	system("cls");
	cout << "\nBienvenido a TO-DO APP, digite el numero de la opcion que desea elegir:\n\n1. Agregar tareas a la lista.\n2. Eliminar tareas de la lista.\n3. Ver lista de tareas\n4. Marcar tareas como completadas.\n5. Salir del programa.\n\n";
}

void Inputmanager::set_option() {
	cin >> opcion;
}

void Inputmanager::evaluate_main_menu_input() {
	switch (opcion) {
	case 1:
		lista.tarea = set_tarea<string>();
		++lista;
		break;
	case 2:
		lista.imprimir_lista_de_tareas();
		lista.numero_tarea = set_numero_tarea<string>(eliminar);
		--lista;
		break;
	case 3:
		lista.imprimir_lista_de_tareas();
		break;
	case 4:
		lista.imprimir_lista_de_tareas();
		lista.numero_tarea = set_numero_tarea<string>(completada);
		lista.marcar_como_completada();
		break;
	case 5:
		Control = 0;
		break;
	default:
		break;
	}
}
