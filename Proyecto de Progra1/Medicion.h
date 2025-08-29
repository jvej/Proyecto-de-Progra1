#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Medicion {
private:
    string fecha;
    float peso;
    float estatura;
    float porcentajeGrasa;
    float porcentajeMusculo;
    int edadMetabolica;
    float grasaVisceral;
    string medidas;
    float IMC;
    int vasosAgua;
    float proteinaRecomendada;
    bool altoR;

public:
    // Constructores y destructor
    Medicion();
    Medicion(string Fecha, float Peso, float Estatura, float PorcentajeGrasa,
        float PorcentajeMusculo, int EdadMetabolica, float GrasaVisceral,
        string Medidas, int VasosAgua, bool AltoR);
    ~Medicion();

    // Métodos funcionales según UML
    void calcularIMC();
    void calcularAguaProteina(char sexo, bool haceEjercicio);
};