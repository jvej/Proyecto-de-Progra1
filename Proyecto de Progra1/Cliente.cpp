#include "Cliente.h"
#include <iostream>

Cliente::Cliente(Persona Datos, string Fecha, string Sexo, Coach* CoachPtr) {
    datos = Datos;
    fechaInscripcion = Fecha;
    sexo = Sexo;
    coach = CoachPtr;
    historial = nullptr;
    cantMediciones = 0;
    rutinaActual = nullptr;
}

Cliente::~Cliente() {
    for (int i = 0; i < cantMediciones; i++) {
        delete historial[i]; 
    }
    delete[] historial; 
}

void Cliente::agregarMedicion(Medicion* m) {
    // Crear nuevo arreglo dinámico con más espacio
    Medicion** nuevo = new Medicion * [cantMediciones + 1];

    for (int i = 0; i < cantMediciones; i++) {
        nuevo[i] = historial[i];
    }

    nuevo[cantMediciones] = m;

    delete[] historial;

    historial = nuevo;
    cantMediciones++;
}

void Cliente::asignarRutina(Rutina* r) {
    rutinaActual = r; 
}

Persona Cliente::getDatos() {
    return datos;
}

string Cliente::getFechaInscripcion() {
    return fechaInscripcion;
}

string Cliente::getSexo() {
    return sexo;
}

Coach* Cliente::getCoach() {
    return coach;
}

Medicion* Cliente::getMedicion(int index) {
    if (index >= 0 && index < cantMediciones) {
        return historial[index];
    }
    return nullptr;
}

int Cliente::getCantMediciones() {
    return cantMediciones;
}

Rutina* Cliente::getRutinaActual() {
    return rutinaActual;
}

string Cliente::toString() const {
    stringstream ss;
    ss << "Cliente: " << datos.toString() << endl;
    ss << "Fecha de Inscripcion: " << fechaInscripcion << endl;
    ss << "Sexo: " << sexo << endl;
    ss << "Coach: " << (coach ? coach->toString() : "Sin asignar") << endl;
    ss << "Cantidad de Mediciones: " << cantMediciones << endl;
    ss << "Rutina Actual: " << (rutinaActual ? "Asignada" : "No asignada") << endl;
	return ss.str();
}



