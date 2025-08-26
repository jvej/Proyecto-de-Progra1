#pragma once
#include <iostream>
#include <sstream>
using namespace std;


class Persona {
private:
	string nombre;
	string ced;
	int numTelefono;
	string correo;
	string fechaNacimiento;
public:
	Persona();
	Persona(string, string, int, string, string);
	virtual ~Persona();

	string getNombre();
	string getCed();
	int getNumTel();
	string getCorreo();
	string getNacimiento();

	void setNombre(string);
	void setCed(string);
	void setNumTel(int);
	void setCorreo(string);
	void setNacimiento(string);

	string toString() const;
};