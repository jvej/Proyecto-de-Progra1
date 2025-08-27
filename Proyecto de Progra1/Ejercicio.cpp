#include "Ejercicio.h"

Ejercicio::Ejercicio(){
    nombre = "";
    grupoMuscular = "";
    series = 0;
    repeticiones = 0;
}

Ejercicio::Ejercicio(string nom, string grupM, int serie, int repe){
    nombre = nom;
    grupoMuscular = grupM;
    series = serie;
    repeticiones = repe;
}

Ejercicio::~Ejercicio(){
}

string Ejercicio::getnombre(){
    return string();
}

string Ejercicio::getgrupoMuscular(){
    return string();
}

int Ejercicio::getseries(){
    return 0;
}

int Ejercicio::getrepeticiones(){
    return 0;
}

void Ejercicio::setnombre(string nom){
    nombre = nom;
}

void Ejercicio::setgrupoMuscular(string grupM){
    grupoMuscular = grupM;
}

void Ejercicio::setseries(int serie){
    series = serie;
}

void Ejercicio::setrepeticiones(int repe){
    repeticiones = repe;
}

string Ejercicio::tostring(){
    stringstream ss;
    ss << "Nombre del ejercicio: " << nombre << endl;
    ss << "Grupo muscular: " << grupoMuscular << endl;
    ss << "Cantidad de serires: " << series << endl;
    ss << "Cantidad de repeticiones: " << repeticiones << endl;
    return ss.str();
}
