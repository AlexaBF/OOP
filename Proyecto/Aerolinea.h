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
    Aerolinea(/* args */);

    void agregarVuelo(Vuelo);

    ~Aerolinea();
};

Aerolinea::Aerolinea(/* args */)
{
}

Aerolinea::~Aerolinea()
{
}
