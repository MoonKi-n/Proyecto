#include "Notificaciones.h"


	void Notificaciones::mostrarNotificaciones() {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		cout << "  ------------------------------------------------" << endl;
		cout << "                     Notificaciones" << endl;
		cout << "  ------------------------------------------------" << endl;
		cout << endl;



		cout << "  1. Ver su posicion en la lista de espera" << endl;

		// Color celeste para resaltar la notificación
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

		cout << "  Hoy a las 5:00 AM " << endl << endl;

		// Restaurar color normal (gris/blanco)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


		cout << "  2. Recordatorio de cita medica" << endl;

		// Color celeste para resaltar la notificación
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout << "  Ayer a las 4:00 PM" << endl;



		// Restaurar color normal (gris/blanco)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

	}
