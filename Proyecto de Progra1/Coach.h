#pragma once
#include <iostream>
#include <sstream>
#include "Persona.h"
using namespace std;

class Coach {
private:
    Persona datos;
    bool especialidades[8];

public:
    Coach();  
    Coach(Persona p, bool esp[8]);
    virtual ~Coach();

    //Set´s
    void setDatos(Persona p);
    void setEspecialidad(int index, bool valor);
   
    //Get´s
    Persona getDatos();
    bool getEspecialidad(int index);

    // toString
    string toString() const;
};