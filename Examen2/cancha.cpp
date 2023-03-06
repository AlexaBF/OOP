//
//  Cancha.cpp
//  Examen
//
//  Created by Alexa Basurto on 08/06/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//

#include "Cancha.hpp"
#include "Fútbol.hpp"
#include <iostream>
using namespace std;
Cancha::Cancha(){
}
Cancha::Cancha(int _jugadores,string _tipo,string
               _cancha):Fútbol(_jugadores,_tipo){
    cancha=_cancha;
}

void Cancha::setCancha(string _cancha){
    cancha=_cancha;
}
string Cancha::getCancha(){
    cout<<"cancha: "<< cancha<<endl;
    return cancha;
}


Cancha::~Cancha(){
}
