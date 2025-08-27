#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Ejercicio {
private:
	string nombre;
	string grupoMuscular;
	int series;
	int repeticiones;
public:
	Ejercicio();
	Ejercicio(string, string, int, int);
	virtual ~Ejercicio();

	//Get's
	string getnombre();
	string getgrupoMuscular();
	int getseries();
	int getrepeticiones();

	//Set's
	void setnombre(string);
	void setgrupoMuscular(string);
	void setseries(int);
	void setrepeticiones(int);

	string tostring();
};