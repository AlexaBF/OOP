#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Passenger.h"
using namespace std;

const int COLUMNAS=4,FILAS=30;

class Flight{
protected:
    string date,airplaneModel, fromTo;
    int hour,price,distance, crew, fuel;
    vector<Passenger> passengers;
    int seats[COLUMNAS][FILAS];

public:
    Flight();
    ~Flight();

    string getDate();
    void setDate (string _date);
    int getHour();
    void setHour(int _hour);
    int getPrice();
    void setPrice(int _price);
    string getAirplaneModel();
    void setAirplaneModel(string _airplaneMode1);
    string getFromTo();
    void setFromTo(string _fromTo);
    int getDistance();
    void setDistance(int _distance);
    int getCrew();
    void setCrew(int _crew);
    int getFuel();
    void setFuel(int _fuel);
    void calculateFuel();
};

//----------------------------CONSTRUCTOR--------------------------------------------
Flight::Flight(){
}
//----------------------------SETTERS----------------------------------------------
void Flight::setAirplaneModel(string _airplaneModel){
    airplaneModel=_airplaneModel;
}
void Flight::setCrew(int _crew){
    crew=_crew;
}
void Flight::setDate(string _date){
    date=_date;
}
void Flight::setDistance(int _distance){
    distance=_distance;
}
void Flight::setFromTo(string _fromTo){
    fromTo=_fromTo;
}
void Flight::setFuel(int _fuel){
    fuel=_fuel;
}
void Flight::setHour(int _hour){
    hour=_hour;
}
void Flight::setPrice(int _price){
    price=_price;
}
//--------------------------------GETTERS-----------------------------------------
string Flight::getAirplaneModel(){
    return airplaneModel;
}
int Flight::getCrew(){
    return crew;
}
string Flight::getDate(){
    return date;
}
int Flight::getDistance(){
    return distance;
}
string Flight::getFromTo(){
    return fromTo;
}
int Flight::getFuel(){
    return fuel;
}
int Flight::getHour(){
    return hour;
}
int Flight::getPrice(){
    return price;
}

//-------------------------------------------------------------------------
void Flight::calculateFuel(){
    /*
    calcula y almacena en el atributo fuel la cantidad de
    combustible que requerirá el vuelo según el destino.
    Este método se debe utilizar al momento de estar programando un vuelo.
    (Tip. Un avión 747 se dice consume alrededor de 1,200 litros por
    cada 100 kilómetros. Para calcular el combustible de otro tipo de avión,
    puedes utilizar una proporción de estas cantidades). No se pide datos al
    usuario y el dato calculado debe mostrar inmediatamente abajo de solicitar 
    el valor del atributo destino, “El combustible requerido para viajar a x
    es de z galones”, donde x es el valor del destination y z el valor calculado para fuel.
    */
}

//----------------------------DESTRUCTOR--------------------------------------------
Flight::~Flight(){
}
