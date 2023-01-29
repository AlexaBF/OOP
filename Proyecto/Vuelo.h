#pragma once

#include <iostream>
#include <string>
#include "Fecha.h"

using namespace std;

class Vuelo{
private:
    string noVuelo,nombre, destino, duracionViaje,detallesAvion,detallesPasajeros;
    int precio,km;
    Fecha fecha;
public:
    Vuelo(/* args */);
    string getFecha();
    ~Vuelo();
};

Vuelo::Vuelo(/* args */)
{
}

Vuelo::~Vuelo()
{
}
