#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Vuelo.h"

using namespace std;

class Aerolinea{
private:
    string nombre;
    vector<Vuelo> vuelos;
public:
    Aerolinea();

    void agregarVuelos();
    void mostrarVuelos();

    string getNombre();
    void setNombre(string _nombre);

    ~Aerolinea();
};

Aerolinea::Aerolinea(/* args */){
}


string Aerolinea::getNombre(){
    return nombre;
}

void Aerolinea::setNombre(string _nombre){
    nombre=_nombre;
}


Aerolinea::~Aerolinea(){
}
