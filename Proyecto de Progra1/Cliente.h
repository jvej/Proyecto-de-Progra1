#pragma once
#include <string>
#include "Persona.h"
#include "Coach.h"
#include "Medicion.h"
#include "Rutina.h"

using namespace std;

class Cliente {
private:
    Persona datos;              
    string fechaInscripcion;   
    string sexo;                 
    Coach* coach;            
    Medicion** historial;  
    int cantMediciones;       
    Rutina* rutinaActual;   

public:
    Cliente(Persona datos, string fecha, string sexo, Coach* coach = nullptr);
    ~Cliente();

    void agregarMedicion(Medicion* m);
    void asignarRutina(Rutina* r);

    // Getters
    Persona getDatos();
    string getFechaInscripcion();
    string getSexo();
    Coach* getCoach();
    Medicion* getMedicion(int index);
    int getCantMediciones();
	Rutina* getRutinaActual();
};
class ola;