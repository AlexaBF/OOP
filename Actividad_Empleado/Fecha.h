#pragma once

#include <iostream>

using namespace std;

class Fecha{
private:
    int dia, mes;
public:
    Fecha();

    int getDia();
    int getMes();
    void setDia(int _dia);
    void setMes(int _mes);

    ~Fecha();
};
//----------------------------------CONSTRUCTOR--------------------------------------------
Fecha::Fecha(){
}
//----------------------------------GETTERS--------------------------------------------
int Fecha::getDia(){
    return dia;
}
int Fecha::getMes(){
    return mes;
}
//----------------------------------SETTERS--------------------------------------------
void Fecha::setDia(int _dia){
    dia=_dia;
}
void Fecha::setMes(int _mes){
    mes=_mes;
}
//----------------------------------DESTRUCTOR--------------------------------------------
Fecha::~Fecha(){
}
