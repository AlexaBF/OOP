#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Passenger{
private:
    string name,phone;
public:
    Passenger();
    ~Passenger();

    string getName();
    void setName(string _name);
    string getPhone();
    void setPhone(string _phone);

};
//----------------------------CONSTRUCTOR--------------------------------------------
Passenger::Passenger(/* args */){
}
//----------------------------SETTERS----------------------------------------------

void Passenger::setName(string _name){
    name = _name;
}
void Passenger::setPhone(string _phone){
    phone=_phone;
}

//--------------------------------GETTERS-----------------------------------------
string Passenger::getName(){
    return name;
}

string Passenger::getPhone(){
    return phone;
}


//----------------------------DESTRUCTOR--------------------------------------------
Passenger::~Passenger(){
}
