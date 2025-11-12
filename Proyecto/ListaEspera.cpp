#include "ListaEspera.h"



	void ListaEspera::mostrarListaEspera() {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		cout << "  ------------------------------------------------" << endl;                               
		cout << "                    Lista de espera" << endl; 
		cout << "  ------------------------------------------------" << endl;
		cout << endl;


		cout << "------------------------------------------------------" << endl;
		cout << "|  Se encuentra en lista de espera. Sera notificado   | " << endl;
		cout << "|  cuando ocurra algun cambio. Se recomienda mantener |  " << endl;
		cout << "|  las notificaciones activadas                       |  " << endl;
		cout << "-------------------------------------------------------" << endl;
		// Color celeste para resaltar la notificación
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

		cout << " 65. Su posicion actual " << endl;
		// Restaurar color normal (gris/blanco)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

		cout << " Has avanzado " << endl;
		// Color celeste para resaltar la notificación
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout << " 10 ";
		// Restaurar color normal (gris/blanco)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "espacios esta semana! " << endl << endl << endl;



		cout << " Estas en la posicion ";

		// Color celeste para resaltar la notificación
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

		cout << "65 ";

		// Restaurar color normal (gris/blanco)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "de ";

		// Color celeste para resaltar la notificación
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

		cout << "1500" << endl;

		// Restaurar color normal (gris/blanco)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	}

