#include "Medicion.h"
#include <sstream>

Medicion::Medicion() {
    fecha = "";
    peso = 0;
    estatura = 0;
    porcentajeGrasa = 0;
    porcentajeMusculo = 0;
    edadMetabolica = 0;
    grasaVisceral = 0;
    medidas = "";
    IMC = 0;
    vasosAgua = 0;
    proteinaRecomendada = 0;
    altoR = false;
}

Medicion::Medicion(string Fecha, float Peso, float Estatura, float PorcentajeGrasa,
    float PorcentajeMusculo, int EdadMetabolica, float GrasaVisceral,
    string Medidas, int VasosAgua, bool AltoR) {
    fecha = Fecha;
    peso = Peso;
    estatura = Estatura;
    porcentajeGrasa = PorcentajeGrasa;
    porcentajeMusculo = PorcentajeMusculo;
    edadMetabolica = EdadMetabolica;
    grasaVisceral = GrasaVisceral;
    medidas = Medidas;
    IMC = 0; // Se calcula aparte
    vasosAgua = VasosAgua;
    proteinaRecomendada = 0; // Se calcula aparte
    altoR = AltoR;
}


Medicion::~Medicion() {}

// Set's
void Medicion::setFecha(string Fecha) {
    fecha = Fecha;
}
void Medicion::setPeso(float Peso) {
    peso = Peso;
}
void Medicion::setEstatura(float Estatura) { 
    estatura = Estatura;
}
void Medicion::setPorcentajeGrasa(float PorcentajeGrasa) {
    porcentajeGrasa = PorcentajeGrasa;
}
void Medicion::setPorcentajeMusculo(float PorcentajeMusculo) {
    porcentajeMusculo = PorcentajeMusculo; 
}
void Medicion::setEdadMetabolica(int EdadMetabolica) {
    edadMetabolica = EdadMetabolica;
}
void Medicion::setGrasaVisceral(float GrasaVisceral) {
    grasaVisceral = GrasaVisceral;
}
void Medicion::setMedidas(string Medidas) {
    medidas = Medidas;
}
void Medicion::setIMC(float Imc) {
    IMC = Imc; 
}
void Medicion::setVasosAgua(int VasosAgua) {
    vasosAgua = VasosAgua; 
}
void Medicion::setProteinaRecomendada(float Proteina) {
    proteinaRecomendada = Proteina;
}
void Medicion::setAltoR(bool AltoR) {
    altoR = AltoR; 
}

// Get's
string Medicion::getFecha() {
    return fecha;
}
float Medicion::getPeso() {
    return peso;
}
float Medicion::getEstatura() {
    return estatura; 
}
float Medicion::getPorcentajeGrasa() {
    return porcentajeGrasa;
}
float Medicion::getPorcentajeMusculo() {
    return porcentajeMusculo;
}
int Medicion::getEdadMetabolica() { 
    return edadMetabolica;
}
float Medicion::getGrasaVisceral() {
    return grasaVisceral;
}
string Medicion::getMedidas() {
    return medidas;
}
float Medicion::getIMC() {
    return IMC;
}
int Medicion::getVasosAgua() {
    return vasosAgua;
}
float Medicion::getProteinaRecomendada() {
    return proteinaRecomendada;
}
bool Medicion::getAltoR() {
    return altoR;
}

// Metodo para calcular el IMC de una persona
void Medicion::calcularIMC() {
    if (estatura > 0) {
        IMC = peso / (estatura * estatura);
    }
    else {
        IMC = 0;
    }
}

void Medicion::calcularAguaProteina(char sexo, bool haceEjercicio) {
    //Maria la verdad no entendi que debe hacer este metodo :)
}

string Medicion::toString() const {
    stringstream ss;
    ss << "Fecha: " << fecha << endl;
    ss << "Peso: " << peso << " kg" << endl;
    ss << "Estatura: " << estatura << " m" << endl;
    ss << "Grasa corporal: " << porcentajeGrasa << "%" << endl;
    ss << "Músculo: " << porcentajeMusculo << "%" << endl;
    ss << "Edad metabólica: " << edadMetabolica << endl;
    ss << "Grasa visceral: " << grasaVisceral << endl;
    ss << "Medidas: " << medidas << endl;
    ss << "IMC: " << IMC << endl;
    ss << "Vasos de agua recomendados: " << vasosAgua << endl;
    ss << "Proteína recomendada: " << proteinaRecomendada << " g" << endl;
    ss << "Alto riesgo: " << altoR << endl;
    return ss.str();
}