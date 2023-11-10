//  Created on 08/06/20.

#pragma once

#include <stdio.h>
#include <iostream>
using namespace std;
class Futbol{
private:
    int jugadores=6;
    string tipodeFutbol="Rápido";
    
public:
    Futbol();
    Futbol(int,string);
    void setJugadores(int);
    void setTipo(string);
    int getJugadores();
    string getTipo();
    
    Futbol  operator<<(const Futbol){
        Futbol salida;
        salida.jugadores=this->jugadores;
        salida.tipodeFutbol=this->tipodeFutbol;
        return salida;
    }
    ~Futbol();
};

Futbol::Futbol(){
    
}
Futbol::Futbol(int _jugadores,string _tipo){
    jugadores=_jugadores;
    tipodeFutbol=_tipo;
}

void Futbol::setJugadores(int _j){
    jugadores=_j;
}
void Futbol::setTipo(string _t){
    tipodeFutbol=_t;
}
int Futbol::getJugadores(){
    cout<<"jugadores= " <<jugadores<<endl;
    return jugadores;
}
string Futbol::getTipo(){
    cout<<"Tipo= "<<tipodeFutbol<<endl;
    return tipodeFutbol;
}


Futbol::~Futbol(){
}
