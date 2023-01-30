#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vuelo{
private:
    string noVuelo,nombre, destino, duracionViaje,detallesAvion,detallesPasajeros,fecha;
    int precio,km;
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
