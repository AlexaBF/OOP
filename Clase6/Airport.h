#pragma once

#include <iostream>
#include <string>
#include "Airline.h"
using namespace std;

const int NumAirlines=3;

class Airport:Airline{
private:
    int id,totalTransactions,totalDailyIncomes;
    string date, city, country;
    Airline listaAirlines[NumAirlines];
public:
    Airport();

    int getId();
    void setId(int _id);
    string getDate();
    void setDate(string _date);
    string getCity();
    void setCity(string _city);
    string getCountry();
    void setCountry(string _country);
    void startOperations(string _date);
    void printAllFlights();
    void closeOperations();

    ~Airport();

};

//------------------------------CONSTRUCTOR-------------------------------------------
Airport::Airport(){
    string fecha;
    cout<<"Ingresa la Fecha de operación en formato día/mes/año: ";
    cin>>fecha;
    startOperations(fecha);
}

//----------------------------SETTERS----------------------------------------------
void Airport::setId(int _id){
    id=_id;
}
void Airport::setDate(string _date){
    date=_date;
}
void Airport::setCity(string _city){
    city=_city;
}
void Airport::setCountry(string _country){
    country=_country;
}

//--------------------------------GETTERS-----------------------------------------
int Airport::getId(){
    return id;
}
string Airport::getDate(){
    return date;
}
string Airport::getCity(){
    return city;
}
string Airport::getCountry(){
    return country;
}

//------------------------------------------------------------------------
void Airport::startOperations(string _date){
    date=_date;
    cout<<"Ingresa el identificador del aeropuerto: ";//ejem AIMX
    cin>>id;
    cout<<"Ingresa la ciudad de operación: ";//ejem CDMX
    cin>>city;
    cout<<"Ingrea el país de operación: ";//ejem México
    cin>>country;
    setBoardingCity(city);

}
void Airport::printAllFlights(){
    cout<<"Los vuelos programados para "<<date<<" son: \n";
    for(int i = 0; i < 3; i++){
        cout<<listaAirlines[i].getIncomes()<<endl;
        cout<<listaAirlines[i].getShortName()<<endl;
        cout<<listaAirlines[i].getBoardingCity()<<endl;
    }
    
}
void Airport::closeOperations(){
    //El número total de vuelos de todas las líneas aéreas
    //que se programaron ese día (almacenar en totalTransactions)
    int counter=0,ingresosGenerados=0;
    for (int i = 0; i < flights.size(); i++){
        if(flights[i].getDate()==date){
            counter++;
        }
        ingresosGenerados+=flights[i].getPrice();
    }
    totalTransactions=counter;
    //El total de ingresos generados por todos
    //los vuelos programados (almacenar en totalDailyIncome).
    totalDailyIncomes=ingresosGenerados;
}

//----------------------------DESTRUCTOR--------------------------------------------
Airport::~Airport(){
}
