#include "Persona.h"


Persona::Persona() {
	nombre = "Indefinido";
	ced = "Indefinido";
	numTelefono = 0;
	correo = "Indefinido";
	fechaNacimiento = "Indefinido";
}


Persona::Persona(string n, string c, int tel, string co, string fn) {
	nombre = n;
	ced = c;
	numTelefono = tel;
	correo = co;
	fechaNacimiento = fn;
}


Persona::~Persona() {}


//Get´s
string Persona::getNombre() {
	return nombre;
}
string Persona::getCed() {
	return ced;
}
int Persona::getNumTel() {
	return numTelefono;
}
string Persona::getCorreo() {
	return correo;
}
string Persona::getNacimiento() {
	return fechaNacimiento;
}


//Set´s
void Persona::setNombre( string n) { 
	nombre = n;
}
void Persona::setCed(string c) {
	ced = c;
}
void Persona::setNumTel(int tel) {
	numTelefono = tel;
}
void Persona::setCorreo(string co) { 
	correo = co;
}
void Persona::setNacimiento(string fn) {
	fechaNacimiento = fn;
}


//metodo toString
string Persona::toString() const {
	stringstream ss;
	ss << "Nombre: " << nombre << endl;
	ss << "Cedula: " << ced << endl;
	ss << "Telefono: " << numTelefono << endl;
	ss << "Correo: " << correo << endl;
	ss << "Fecha de Nacimiento: " << fechaNacimiento << endl;
	return ss.str();
}