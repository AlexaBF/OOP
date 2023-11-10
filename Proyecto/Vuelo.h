#pragma once
/*
Descripción: Clase Vuelo
última fecha de Modificación: 07/02/2023
*/
#include <iostream>
#include <string>

using namespace std;

class Vuelo{
private:
    string nombre,noVuelo, destino, duracionViaje,detallesAvion,fecha;
    int precio,km,asientosDisponibles,asientosTotales;
public:
    Vuelo();

    string getNombre();
    string getNoVuelo();
    string getDestino();
    string getDuracionViaje();
    string getDetallesAvion();
    string getFecha();
    int getPrecio();
    int getKm();
    int getAsientosDisponibles();
    int getAsientosTotales();

    void setAsientosDisponibles(int _asientos);

    void crearVuelo(string _nombre,string _noVuelo,string _destino
    ,string _duracionViaje,string _detallesAvion,string _fecha
    ,int _precio,int _km,int _asientosDisponibles,int _asientosTotales);

    void mostrarVuelo();

    ~Vuelo();
};
//------------------------------------------------------------------------------------------------
//-----------------------------------CONSTRUCTOR------------------------------------------------
Vuelo::Vuelo(){
}
//------------------------------------------------------------------------------------------------
//-----------------------------------SETTERS---------------------------------------------------
void Vuelo::setAsientosDisponibles(int _asientos){
    asientosDisponibles=_asientos;
}
//------------------------------------------------------------------------------------------------
//---------------------------------------CREAR VUELO----------------------------------------------------
void Vuelo::crearVuelo(string _nombre,string _noVuelo,string _destino
    ,string _duracionViaje,string _detallesAvion,string _fecha
    ,int _precio,int _km,int _asientosDisponibles,int _asientosTotales){
    nombre=_nombre;
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

//------------------------------------------------------------------------------------------------
//--------------------------------------------GETTERS-------------------------------------------------
string Vuelo::getNombre(){
    return nombre;
}
string Vuelo::getNoVuelo(){
    return noVuelo;
}
string Vuelo::getDestino(){
    return destino;
}
string Vuelo::getDuracionViaje(){
    return duracionViaje;
}
string Vuelo::getDetallesAvion(){
    return detallesAvion;
}
string Vuelo::getFecha(){
    return fecha;
}
int Vuelo::getPrecio(){
    return precio;
}
int Vuelo::getKm(){
    return km;
}
int Vuelo::getAsientosDisponibles(){
    return asientosDisponibles;
}
int Vuelo::getAsientosTotales(){
    return asientosTotales;
}
//------------------------------------------------------------------------------------------------
//------------------------------------------MOSTRAR VUELO----------------------------------------------
void Vuelo::mostrarVuelo(){
    cout<<"Aerolinea: "<<nombre<<endl;
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
//------------------------------------------------------------------------------------------------
//-----------------------------------------DESTRUCTOR------------------------------------------------
Vuelo::~Vuelo(){
}
