#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Airline.h"
using namespace std;

const int NumAirlines=3;

class Airport{
private:
    int id,totalTransactions,totalDailyIncomes;
    string date, city, country;
    vector<Airline> Airlines;
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
void Airport::setCountry(string _country){

}
void Airport::startOperations(string _date){

}
void Airport::printAllFlights(){

}
void Airport::closeOperations(){

}

//----------------------------DESTRUCTOR--------------------------------------------
Airport::~Airport(){
}
