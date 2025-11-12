#ifndef USUARIO_H
#define USUARIO_H

#include<string>

class Usuario {
private:
std::string nombre;
int identificacion;
std::string correo;
std::string contrasena;
std::string telefono;
std::string fechaNacimiento;

public:
    Usuario(std::string nom, int id, std::string corr, std::string contra);
    void setTelefono(std::string tel);
    void setFechaNacimiento(std::string fecha);
    std::string getNombre();
    int getIdentificacion();
    std::string getCorreo();
    std::string getTelefono();
    std::string getFechaNacimiento();
    std::string getContrasena();
};

#endif