#include "Usuario.h"
#include<string>
Usuario::Usuario(std::string nom, int id, std::string corr, std::string contra) {
    nombre = nom;
    identificacion = id;
    correo = corr;
    contrasena = contra;
}

void Usuario::setTelefono(std::string tel) {
    telefono = tel;
}

void Usuario::setFechaNacimiento(std::string fecha) {
    fechaNacimiento = fecha;
}

std::string Usuario::getNombre() {
    return nombre;
}

int Usuario::getIdentificacion() {
    return identificacion;
}

std::string Usuario::getCorreo() {
    return correo;
}

std::string Usuario::getTelefono() {
    return telefono;
}

std::string Usuario::getFechaNacimiento() {
    return fechaNacimiento;
}

std::string Usuario::getContrasena() {
    return contrasena;
}