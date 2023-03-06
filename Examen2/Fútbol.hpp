//
//  Fútbol.hpp
//  Examen
//
//  Created by Alexa Basurto on 08/06/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//

#ifndef Fu_tbol_hpp
#define Fu_tbol_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Fútbol{
private:
    int jugadores=6;
    string tipodefútbol="Rápido";
    
public:
    Fútbol();
    Fútbol(int,string);
    void setJugadores(int);
    void setTipo(string);
    int getJugadores();
    string getTipo();
    
    Fútbol  operator<<(const Fútbol){
        Fútbol salida;
        salida.jugadores=this->jugadores;
        salida.tipodefútbol=this->tipodefútbol;
        return salida;
    }
    ~Fútbol();
};
#endif /* Fu_tbol_hpp */
