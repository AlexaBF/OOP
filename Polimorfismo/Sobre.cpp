//  Created on 28/05/20.

// Implementacion de la Clase DERIVADA Sobre

#include "Sobre.hpp"
#include <iostream>

// constantes para definir los parametros para cargo adicional
const int ANCHO = 25, LARGO = 30;
const double CARGOFIJO = 100;

Sobre::Sobre(){
    cargoAdicional = 0;
}

Sobre::Sobre(string nr, string dr, string cr, string er, string cpr, string nd, string dd,
             string cd,string ed, string cpd, int largo, int ancho):Envio(nr,dr,cr,er,cpr,nd,dd,cd,ed,cpd){
    cargoAdicional = 0.0; //  no hay cargo adicional originalmente
    if (largo > LARGO || ancho > ANCHO) // si sobrepasa las medidas, se agrega uncargo adicional fijo
        cargoAdicional = CARGOFIJO;
}

Sobre::~Sobre(){
}

double Sobre::getCargoAdicional(){
    return cargoAdicional;
}

void Sobre::setCargoAdicional(double c) {
    cargoAdicional = c;
}

double Sobre::calculaCosto(){
    cout<<"Objeto sobre:"<<getCosto() + cargoAdicional<<endl;
    return getCosto() + cargoAdicional;// el cargo adicional se le agrega al costo base del envio
}
