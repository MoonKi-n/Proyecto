#include "Perfil.h"
#include <iostream>
using namespace std;

void Perfil::cargarContactos() {
    // Contactos quemados
    contactos.push_back({ "Letica Martinez", "504480847", "Leticia.martinez@gmail.com", "(+506) 1799-1384" });
    contactos.push_back({ "David Mendez", "709020662", "Dmendez@gmail.com", "(+506) 8765-4321" });
    contactos.push_back({ "Mateo Suarez", "507340921", "mateol2@gmail.com", "(+506) 1234-5678" });
}

void Perfil::mostrarContactos() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Verificar si hay contactos
    if (contactos.empty()) {
        cout << "No hay contactos para mostrar." << endl;
        return;
    }

    for (const auto& contacto : contactos) {

        // Mostrar nombre
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout <<  contacto.nombre << endl;

        // Mostrar ID
            // Restaurar color normal (blanco/gris)
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << " ID: " << contacto.id << endl;;

      

        // Mostrar detalles en color normal
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << " Correo: " << contacto.correo << endl;
        cout << " Teléfono: " << contacto.telefono << endl;
        cout << "-----------------------------------" << endl;
    }
}

void Perfil::mostrarPerfil(std::string nombre, int id, std::string correo, std::string telefono, std::string fechaNacimiento) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << " -------------------------------- " << endl;
    // Encabezado
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    cout << "            Mi Perfil" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout << " -------------------------------- " << endl;
    cout << endl;
    cout << " Nombre: " << nombre << endl;
    cout << " ID: " << id << endl;
    cout << " correo: " << correo << endl;
    cout << " contacto: " << telefono << endl;
    cout << " fecha de nacimiento: " << fechaNacimiento << endl;
    cout << endl;

    // Sección de contactos
    cout << " ---------------------------------- " << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "            Mis Contactos " << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout << " ---------------------------------- " << endl;
    cout << endl;

    mostrarContactos();
}
