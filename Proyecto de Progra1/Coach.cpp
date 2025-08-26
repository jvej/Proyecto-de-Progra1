#include "Coach.h"


Coach::Coach() {
    datos = Persona(); 
    for (int i = 0; i < 8; i++) {
        especialidades[i] = false;
    }
}


Coach::Coach(Persona p, bool esp[8]) { //esp es la especialidad
    datos = p;
    for (int i = 0; i < 8; i++) {
        especialidades[i] = esp[i];
    }
}


Coach::~Coach() {}

//Set´s
void Coach::setDatos(Persona p) {
    datos = p;
}

void Coach::setEspecialidad(int index, bool valor) {
    if (index >= 0 && index < 8) {
        especialidades[index] = valor;
    }
}

//Get´s
Persona Coach::getDatos() {
    return datos;
}

bool Coach::getEspecialidad(int index) {
    if (index >= 0 && index < 8) {
        return especialidades[index];
    }
    return false;
}

//toString
string Coach::toString() const {
    stringstream ss;
    ss << "===== Datos del Coach =====" << endl;
    ss << datos.toString();
    ss << "Especialidades: ";
    for (int i = 0; i < 8; i++) {
        ss << (especialidades[i]);
    }
    return ss.str();
}



class Perro {
    private
};