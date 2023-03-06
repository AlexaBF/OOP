//
//  Cancha.hpp
//  Examen
//
//  Created by Alexa Basurto on 08/06/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//

#ifndef Cancha_hpp
#define Cancha_hpp

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
#endif /* Cancha_hpp */
