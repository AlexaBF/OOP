//  Created on 08/06/20.
#pragma once

#include <stdio.h>
#include <iostream>
#include "Fútbol.hpp"
using namespace std;
class Cancha:public Fútbol{
private:
    string cancha="rectangular";
    
public:
    Cancha();
    Cancha(int,string,string);
    void setCancha(string);
    string getCancha();
    
    Cancha operator==(const Cancha){
        Cancha salida;
        salida.cancha=this->cancha;
        if(cancha!="rectangular"||cancha!="ovalada"){
            cout<<"es diferente"<<endl;
        }else{
            cout<<"no es diferente"<<endl;
        }
        return *this;
    }
    ~Cancha();
};

Cancha::Cancha(){
}
Cancha::Cancha(int _jugadores,string _tipo,string _cancha):Fútbol(_jugadores,_tipo){
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

