//
//  Paquete.hpp
//  poli
//
//  Created by Alexa Basurto on 28/05/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//

#ifndef Paquete_hpp
#define Paquete_hpp

#include <stdio.h>
#include <string>
#include "Envio.hpp"

using namespace std;

class Paquete:public Envio
{
    public:   //metodos
        //constructores
        Paquete();
        Paquete(string, string, string, string, string, string, string, string, string, string, int, int, int, float, double);
        // destructor
        virtual ~Paquete();
        //setters y getters
        void setLargo(int);
        void setAncho(int);
        void setProfundidad(int);
        void setCargoAdicional(double);
        void setPeso(float);
        void setCostoxkg(double);
        int getLargo();
        int getAncho();
        int getProfundidad();
        double getCargoAdicional();
        double getCostoxkg();
        //otros metodos
        double calculaCosto();

    private:  //atributos
        double cargoAdicional;
        int largo, ancho, profundidad;
        float peso;
        double costoxkg;
};

#endif /* Paquete_hpp */
