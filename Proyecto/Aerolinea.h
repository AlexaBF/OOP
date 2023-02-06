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

    void agregarVuelos(string _noVuelo,string _destino
    ,string _duracionViaje,string _detallesAvion,string _fecha
    ,int _precio,int _km,int _asientosDisponibles,int _asientosTotales);

    void mostrarVuelos();

    string getNombre();
    void setNombre(string _nombre);

    ~Aerolinea();
};

Aerolinea::Aerolinea(){
    
}

void Aerolinea::agregarVuelos(string _noVuelo,string _destino
    ,string _duracionViaje,string _detallesAvion,string _fecha
    ,int _precio,int _km,int _asientosDisponibles,int _asientosTotales){
    Vuelo viaje;
    viaje.crearVuelo(_noVuelo,_destino,_duracionViaje,_detallesAvion
    ,_fecha,_precio,_km,_asientosDisponibles,_asientosTotales);
    vuelos.push_back(viaje);
}

void Aerolinea::mostrarVuelos(){
    for (int i = 0; i < vuelos.size(); i++){
        vuelos[i].mostrarVuelo();
    }
}


string Aerolinea::getNombre(){
    return nombre;
}
void Aerolinea::setNombre(string _nombre){
    nombre=_nombre;
}

Aerolinea::~Aerolinea(){
}
