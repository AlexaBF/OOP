//
//  Sobre.hpp
//  poli
//
//  Created by Alexa Basurto on 28/05/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//

#ifndef Sobre_hpp
#define Sobre_hpp

#include <stdio.h>
#include <string>
#include "Envio.hpp"


class Sobre: public Envio 
{
    public:
        // constructores
        Sobre();
        Sobre(string, string, string, string, string, string, string, string, string, string, int, int);
        // destructor
        virtual ~Sobre();
        //setters y getters
        double getCargoAdicional();
        void setCargoAdicional(double);
        // otros metodos
        double calculaCosto();

    private:
        double cargoAdicional;
};


#endif /* Sobre_hpp */
