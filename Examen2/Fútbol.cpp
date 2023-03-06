//
//  Fútbol.cpp
//  Examen
//
//  Created by Alexa Basurto on 08/06/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//

#include "Fútbol.hpp"
Fútbol::Fútbol(){
    
}
Fútbol::Fútbol(int _jugadores,string _tipo){
    jugadores=_jugadores;
    tipodefútbol=_tipo;
}

void Fútbol::setJugadores(int _j){
    jugadores=_j;
}
void Fútbol::setTipo(string _t){
    tipodefútbol=_t;
}
int Fútbol::getJugadores(){
    cout<<"jugadores= " <<jugadores<<endl;
    return jugadores;
}
string Fútbol::getTipo(){
    cout<<"Tipo= "<<tipodefútbol<<endl;
    return tipodefútbol;
}


Fútbol::~Fútbol(){
}
