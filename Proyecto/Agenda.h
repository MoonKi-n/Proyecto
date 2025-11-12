#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <vector>
#include <windows.h>
#include<string>

struct CitaMedica {
std::string mes;
std::string anio;
std::string descripcion;
std::string lugar;
std::string hora;
bool enListaEspera;
};

class Agenda {
private:
    std::vector<CitaMedica> citas;
    void cargarCitas();
public:
    void mostrarAgenda();
};

#endif