#pragma once
#include <iostream>
#include <sstream>
#include "Ejercicio.h"
using namespace std;


class Rutina {
private:
	Ejercicio** ejercicios;
	int can;
public:
    Rutina();
    ~Rutina();

    void agregarEjercicio(Ejercicio* e);
    Ejercicio* getEjercicio(int index);
    int getCantidad() const;
};