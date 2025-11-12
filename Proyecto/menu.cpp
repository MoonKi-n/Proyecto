#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include "Usuario.h"
#include "Perfil.h"
#include "Agenda.h"
#include "Notificaciones.h"
#include "ListaEspera.h"
using namespace std;


int main()
{
	Notificaciones notificacion;
	ListaEspera listaEspera;


	//para registro 
	string  nombre, correo, contrasena;
	int idUsuario;

	//para inicar sesion
	string correoLogin, contrasenaLogin;
	bool inicioCorrecto = false; // hasta que se verifique permanece en false


	// para menu
	int opcion;
	char confirmar;

	//registro

	// Obtener el handle de la consola
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	cout << " ==================================================" << endl;
	cout << "   Favor ingrese sus datos para crear una cuenta" << endl;
	cout << " ==================================================" << endl;

	bool idValido = false;
	while (!idValido) {
		cout << endl << " Ingrese su ID: ";
		if (cin >> idUsuario) {
			idValido = true;
			cin.ignore();
		}
		else {
			// Cambiar color a rojo para la parte del error
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

			cout << endl << " Error: Debe ingresar solo numeros para el ID." << endl << endl;


			// Restaurar color (gris/blanco)
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

			cin.clear();
			cin.ignore(10000, '\n');
			system("pause");
			system("cls");

			// Volvemos a imprimir el encabezado 

			cout << " ==================================================" << endl;
			cout << "   Favor ingrese sus datos para crear una cuenta" << endl;
			cout << " ==================================================" << endl;
		}

	}


	cout << " Ingrese su nombre: ";
	getline(cin, nombre);

	while (nombre.empty())
	{

		// Cambiar color a rojo para la parte del error
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

		cout << " ERROR: No se permiten espacios en blanco. " << endl << endl;

		// Restaurar color (gris/blanco por defecto)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


		cout << "Ingrese su nombre: ";

		getline(cin, nombre);

	}

	cout << " Ingrese su  correo: ";
	getline(cin, correo);

	while (correo.empty())
	{
		// Cambiar color a rojo para la parte del error
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

		cout << " ERROR: No se permiten espacios en blanco. " << endl << endl;

		// Restaurar color (gris/blanco por defecto)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

		cout << "Ingrese su correo: ";
		getline(cin, correo);

	}

	cout << " Ingrese una contrasena: ";
	getline(cin, contrasena);

	while (contrasena.empty())

	{

		// Cambiar color a rojo para la parte del error
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

		cout << " ERROR: No se permiten espacios en blanco. " << endl << endl;

		// Restaurar color (gris/blanco por defecto)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

		cout << "Ingrese su  contrasena: ";
		getline(cin, contrasena);

	}



	// Cambiar color a cian para el nombre
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

	cout << endl << " Su cuenta se ha creado exitosamente. " << endl;

	// Restaurar color normal (blanco/gris)
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

	Usuario usuario(nombre, idUsuario, correo, contrasena);
	system("pause");
	system("cls");



	//Inicio de sesion
	do {
		cout << " ==================================================" << endl;
		cout << "                 Inicio de sesion" << endl;
		cout << " ==================================================" << endl;
		cout << endl << " Digite su correo : ";
		getline(cin, correoLogin);
		cout << " Digite su contrasena : ";
		getline(cin, contrasenaLogin);

		// Obtener el handle de la consola
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		if (correoLogin == usuario.getCorreo() && contrasenaLogin == usuario.getContrasena()) {

			// Cambiar color a cian para el nombre
			SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

			cout << endl << " Bienvenido " << usuario.getNombre() << "!" << endl;
			cout << " Esperamos que tengas un gran dia lleno de salud! " << endl;

			// Restaurar color normal (blanco/gris)
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

			inicioCorrecto = true;

			system("pause");
			system("cls");
		}
		else {
			// Cambiar color a rojo para el error 
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

			cout << " Los datos ingresados son incorrectos. Intente de nuevo.   ";

			// Restaurar color (gris/blanco por defecto)
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

			system("pause");
			system("cls");


		}

	} while (!inicioCorrecto);

	//...............................................................................................

	// Datos quemados para el perfil
	usuario.setTelefono(" (+506) 8862-7521");
	usuario.setFechaNacimiento(" 20/11/1981");

	// Crear objetos para las opciones 1 y 2
	Perfil perfil;
	Agenda agenda;

	//objeto e la posicion 3
	Notificaciones  notificaciones;

	//objeto para opcion 4
	ListaEspera listaespera;

	//.................................................................................................

	do
	{


		// Obtener el handle de la consola
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);



		cout << "  ==================================================" << endl;
		cout << "                 Menu de opciones" << endl;
		cout << "  ==================================================" << endl;
		cout << " 1. Ver perfil " << endl;
		cout << " 2. Mi agenda" << endl;
		cout << " 3. Notificaciones" << endl;
		cout << " 4. Lista de espera  " << endl;



		// Cambiar color a rojo intenso para la opción 5
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

		cout << " 5. salir " << endl;

		// Restaurar color (gris/blanco por defecto)
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


		cout << "  ================================================== " << endl;
		cout << " Favor seleccione una opcion: ";
		cin >> opcion;
		cin.ignore(); // Limpiar el buffer del teclado





		switch (opcion)
		{
		case 1:
			system("cls");
			perfil.mostrarPerfil(usuario.getNombre(), usuario.getIdentificacion(), usuario.getCorreo(), usuario.getTelefono(), usuario.getFechaNacimiento());
			break;

		case 2:
			system("cls");
			agenda.mostrarAgenda();
			break;

		case 3:
			system("cls");
			notificaciones.mostrarNotificaciones();
			break;

		case 4:
			system("cls");
			listaespera.mostrarListaEspera();
			break;

		case 5:
			do
			{
				cout << " Estas seguro que desea salir? " << endl;
				cout << endl << " Marque: 's' si la respuesta es si y 'n' si la respuesta es no: ";
				cin >> confirmar;

				if (confirmar == 's' || confirmar == 'S')
				{
					// Cambiar color a cian para decir adios
					SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

					cout << endl << " Hasta pronto " << usuario.getNombre() << "!" << endl;
					cout << endl << " Has cerrado sesion de forma segura. " << endl;


					// Restaurar color normal (blanco/gris)
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

					return 0; // termina el programa 


				}
				else if (confirmar == 'n' || confirmar == 'N')
				{
					cout << endl << " Regresando al menu... " << endl;
					opcion = 0;
				}
				else {
					// Cambiar color a rojo para la parte del error
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);


					cout << endl << " Error: letra invalida. Debe ingresar 's' o 'n' " << endl;

					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
					cout << endl;
				}



			} while (confirmar != 's' && confirmar != 'S' && confirmar != 'n' && confirmar != 'N');
			break;

			// Restaurar color (gris/blanco por defecto)
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

			break;

		default:

			// Cambiar color a rojo para la parte del error
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);


			cout << " Opcion invalida. Por favor ingresar  un numero del 1 al 5 " << endl << endl;

			// Restaurar color (gris/blanco por defecto)
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

			break;



		}

		cout << endl;
		system("pause");
		system("cls");



	} while (opcion != 5);


}