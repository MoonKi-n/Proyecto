#include "Agenda.h"
#include <iostream>
using namespace std;

void Agenda::cargarCitas() {
    // Citas quemadas
    citas.push_back({ " Diciembre ", " 2025 ", " chequeo general ", " Hospital La Anexion, Guanacaste ", "2:30 PM", false });
    citas.push_back({ "Octubre", " 2030 ", " Cirugia cardiovascular ", " Hospital La Anexion Nicoya, Guanacaste ", " 2:30 PM ", true });
}

void Agenda::mostrarAgenda() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "------------------------------" << endl;
    cout << "           Mi Agenda         " << endl;
    cout << "------------------------------"<<endl<<endl;
 
    cargarCitas();

    for (const auto& cita : citas) {
        // Mostrar mes y año
        // Color celeste 
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << cita.mes << " " << cita.anio << endl;
        // Restaurar color normal (gris/blanco)
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


        // Mostrar días
        cout << " -----------------------" << endl;
        cout << "| L  M  X  J  V  S   D  |" << endl;
        cout << "| 1  2  3  4  5  6   7  |" << endl;
        cout << "| 8  9  10 11 12 13  14 |" << endl;
        cout << "| 15 16 17 18 19 20  21 |" << endl;
        cout << "| 22 23 24 25 26 27  28 |" << endl;
       
      

        if (cita.mes == "Diciembre") {
            cout << "| 29 30 31              |" << endl;
           
        }
        else {
            cout << "| 29 30                 |" << endl;
        }
        cout << "------------------------" << endl;
    

        // Mostrar detalles de la cita
        cout << " Cita medica: " << endl;
        cout << cita.lugar << " - " << cita.descripcion << endl;

        if (!cita.hora.empty()) {
            cout << " Hora: " << cita.hora << endl;
        }

        // Mostrar estado
        if (cita.enListaEspera) {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << " Lista de espera. " << endl;
        }
        else {
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << " Confirmada. " << endl<<endl<<endl;
        }

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
      
    }
}