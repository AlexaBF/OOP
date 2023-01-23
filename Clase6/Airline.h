#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Flight.h"
using namespace std;

class Airline{
private:
    string boardingCity,shortName;
    int income;
    vector<Flight> flights;
public:
    Airline(/* args */);
    ~Airline();

    string getBoardingCity();
    void setBoardingCity(string _boardingCity);
    string getShortName();
    void setShortName(string _shortName);
    int getIncomes();
    void setIncomes(int _incomes);

    void updateAirline();
    void scheduleFlight();
    void currentIncome();
    void closeOperation();

};
//----------------------------CONSTRUCTOR--------------------------------------------
Airline::Airline(/* args */){
}

//----------------------------SETTERS----------------------------------------------

void Airline::setBoardingCity(string _boardingCity){
    boardingCity=_boardingCity;
}
void Airline::setShortName(string _shortName){
    shortName=_shortName;
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
int Airline::getIncomes(){
    return income;
}
//---------------------------------------------------------------------------

void Airline::updateAirline(){

}
void Airline::scheduleFlight(){

}
void Airline::currentIncome(){

}
void Airline::closeOperation(){
    
}

//----------------------------DESTRUCTOR--------------------------------------------
Airline::~Airline(){
}
