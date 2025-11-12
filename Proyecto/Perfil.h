#ifndef PERFIL_H
#define PERFIL_H

#include <iostream>
#include <vector>
#include <windows.h>

struct Contacto {
std::string nombre;
std::string id;
std::string correo;
std::string telefono;

};

class Perfil {
private:
    std::vector<Contacto> contactos;
    void cargarContactos();
public:
    Perfil() { cargarContactos(); }
    void mostrarContactos();
    void mostrarPerfil(std::string nombre, int id, std::string correo, std::string telefono, std::string fechaNacimiento );

};

#endif