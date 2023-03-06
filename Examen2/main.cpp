//
//  main.cpp
//  Examen
//
//  Created by Alexa Basurto on 08/06/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//
#include "Fútbol.hpp"
#include "Cancha.hpp"
#include <iostream>
using namespace std;
int main() {
    Fútbol sal;
    sal.getJugadores();
    sal.getTipo();
    Cancha salir;
    salir.getCancha();
    Fútbol *vec[7];
    vec[3]=new Fútbol(11,"Fútbol7");
    vec[3]->getJugadores();
    vec[6]=new Fútbol(11,"Fútbol7");
    vec[6]->getTipo();
    Cancha *ve[10];
    ve[9]=new Cancha(11,"Fútbol7","rectangular");
    ve[9]->getCancha();

    return 0;
}
