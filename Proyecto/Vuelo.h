#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vuelo{
private:
    string noVuelo, destino, duracionViaje,detallesAvion,fecha;
    int precio,km,asientosDisponibles,asientosTotales;
public:
    Vuelo();

    string getFecha();
    int getAsientosDisponibles();
    int getAsientosTotales();

    void crearVuelo(string _noVuelo,string _destino
    ,string _duracionViaje,string _detallesAvion,string _fecha
    ,int _precio,int _km,int _asientosDisponibles,int _asientosTotales);

    void mostrarVuelo();

    ~Vuelo();
};

Vuelo::Vuelo(){
}

void Vuelo::crearVuelo(string _noVuelo,string _destino
    ,string _duracionViaje,string _detallesAvion,string _fecha
    ,int _precio,int _km,int _asientosDisponibles,int _asientosTotales){
    noVuelo=_noVuelo;
    destino=_destino;
    duracionViaje=_duracionViaje;
    detallesAvion=_detallesAvion;
    fecha=_fecha;
    precio=_precio;
    km=_km;
    asientosDisponibles=_asientosDisponibles;
    asientosTotales=_asientosTotales;
}

void Vuelo::mostrarVuelo(){
    cout<<"Número de Vuelo: "<<noVuelo<<endl;
    cout<<"Destino: "<<destino<<endl;
    cout<<"Duración: "<<duracionViaje<<endl;
    cout<<"Detalles del Avión: "<<detallesAvion<<endl;
    cout<<"Fecha: "<<fecha<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<"Kilometros: "<<km<<endl;
    cout<<"Asientos Disponibles: "<<asientosDisponibles<<endl;
    cout<<"Asientos Totales: "<<asientosTotales<<endl;
}


Vuelo::~Vuelo(){
}
