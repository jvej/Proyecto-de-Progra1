#include "Rutina.h"


Rutina::Rutina() {
    ejercicios = nullptr;
    can = 0;
}

Rutina::~Rutina() {
    for (int i = 0; i < can; i++) {
        delete ejercicios[i];
    }
    delete[] ejercicios; 
}

void Rutina::agregarEjercicio(Ejercicio* e) {
    Ejercicio** nuevo = new Ejercicio * [can + 1];

    for (int i = 0; i < can; i++) {
        nuevo[i] = ejercicios[i];
    }
    nuevo[can] = e;
    delete[] ejercicios;
    ejercicios = nuevo;
    can++;
}

Ejercicio* Rutina::getEjercicio(int aux) {
    if (aux >= 0 && aux < can) {
        return ejercicios[aux];
    }
    return nullptr; 
}

int Rutina::getCantidad() const {
    return can;
}
