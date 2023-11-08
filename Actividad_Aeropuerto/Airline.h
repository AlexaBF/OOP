#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Flight.h"
using namespace std;

class Airline{
protected:
    string boardingCity,shortName,name;
    int income;
    vector<Flight> flights;
public:
    Airline(/* args */);
    ~Airline();

    string getBoardingCity();
    void setBoardingCity(string _boardingCity);
    string getShortName();
    void setShortName(string _shortName);
    string getName();
    void setName(string _name);
    int getIncomes();
    void setIncomes(int _incomes);

    void updateAirline();
    void scheduleFlight();
    void currentIncome();
    void closeOperation();

};
//----------------------------CONSTRUCTOR--------------------------------------------
Airline::Airline(){
}

//----------------------------SETTERS----------------------------------------------

void Airline::setBoardingCity(string _boardingCity){
    boardingCity=_boardingCity;
}
void Airline::setShortName(string _shortName){
    shortName=_shortName;
}
void Airline::setName(string _name){
    name=_name;
}
void Airline::setIncomes(int _incomes){
    income=_incomes;
}

//--------------------------------GETTERS-----------------------------------------

string Airline::getBoardingCity(){
    return boardingCity;
}
string Airline::getShortName(){
    return shortName;
}
string Airline::getName(){
    return name;
}
int Airline::getIncomes(){
    return income;
}
//---------------------------------------------------------------------------

void Airline::updateAirline(){
    //llenará los datos shortName (ej. AM, JAA) y
    //name (ej. Aeroméxico, Delta) de la línea aérea solicitando los datos al usuario.
    cout<<"Ingresa el acrónimo de la aerolinea: ";
    cin>>shortName;
    cout<<"Ingresa el nombre de la aerolinea: ";
    cin>>name;
}
void Airline::scheduleFlight(){
    if(flights.size()==10){
        cout<<"Vuelos de la línea aérea "<<name<<" saturados, imposible programar"<<endl;
    }else{
        /*
        Identificador de la línea aérea que realiza el vuelo (shortName).
o Modelo del avión (airplaneModel).
o Ciudad destino (la integración del valor de ciudad de embarque más el valor de ciudad
destino genera el valor del atributo fromTo y debe quedar completo en este punto).
o Distancia del vuelo (distance).
o Clave de la tripulación (crew).
o Horario del vuelo “12:00” (hour).
o Precio del boleto (price).
o Mientras el pasajero decida continuar, y no se llene el vuelo que se programa,
se asignarán y mostrarán asientos del vuelo a pasajeros (arreglo bidimensional seats). 
Recuerda que los aviones tienen 4 columnas y 30 filas. El pasajero 
elige su asiento y un mismo pasajero puede seleccionar el número de asientos que requiera.*/
    }
    
    
}
void Airline::currentIncome(){
    /*calcula, almacena (en incomes) y muestra el 
    monto de ingresos de la línea aérea en función de 
    los asientos vendidos y del precio del boleto de cada uno
    de los vuelos programados. Es importante que cada vez que
    se programen vuelos de una línea aérea, se actualice el atributo incomes.*/
}
void Airline::closeOperation(){
    cout<<"ingreso total del día"<<income<<endl;
}

//----------------------------DESTRUCTOR--------------------------------------------
Airline::~Airline(){
}
