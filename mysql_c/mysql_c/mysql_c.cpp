// mysql_c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <mysql.h>
#include <iostream>
using namespace std;
int main()
{
	MYSQL* conectar;
	conectar = mysql_init(0);
	conectar = mysql_real_connect(conectar, "localhost", "usr_hospital", "hospital@123", "db_hospital", 3306, NULL, 0);
	if (conectar) {
		//cout << "conexion exitosa..." << endl;
		string estudiante;
		cout << "ingrese estudiante";
		cin>>estudiante;
		string insert = "insert into estudiantes(estudiante)values('" + estudiante + "')";
		const char* i = insert.c_str();
		q_estado = mysql_query(conectar, i);
		if (!q_estado) {
			cout << "ingreso exitoso" << endl;
		}
		else {
			cout << "error" << endl;
		}
	}
	system("pause");

};

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln