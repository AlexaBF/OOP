//  Created on 28/05/20.

// Implementacion de la Clase DERIVADA Paquete
#include "Paquete.hpp"
#include <string>
#include <iostream>

using namespace std;
const int ANCHO = 30, LARGO = 25;
const float PESOBASE = 5.0;

Paquete::Paquete(){
    cargoAdicional = 0;
    peso = 0.0;
    largo = 0;
    ancho = 0;
    profundidad = 0;
}

Paquete::Paquete(string nr, string dr, string cr, string er, string cpr, string nd,string dd,
                 string cd, string ed, string cpd, int lar, int anch, int prof,
                 float pes, double costoxk):Envio(nr, dr, cr, er, cpr, nd, dd, cd, ed, cpd){
    cargoAdicional = 0; // no hay cargo adicional hasta tener los valores de ancho, largo y peso
    largo = lar;
    ancho = anch;
    profundidad = prof;
    peso = pes;
    costoxkg = costoxk;
    if (largo > LARGO || ancho > ANCHO || peso > PESOBASE)// calcula costo adicional si el paquete supera estos estandares
        cargoAdicional = peso * costoxk; // el sobre costo se calcula peso * costo por kilo del paquete
}
Paquete::~Paquete(){
}
void Paquete::setLargo(int l){
    largo = l;
}
void Paquete::setAncho(int a){
    ancho = a;
}
void Paquete::setProfundidad(int p){
    profundidad = p;
}
void Paquete::setCargoAdicional(double ca){
    cargoAdicional = ca;
}
void Paquete::setPeso(float p){
    peso = p;
}
void Paquete::setCostoxkg(double c){
    costoxkg = c;
}
int Paquete::getLargo(){
    return largo;
}
int Paquete::getAncho(){
    return ancho;
}
int Paquete::getProfundidad(){
    return profundidad;
}
double Paquete::getCargoAdicional(){
    return cargoAdicional;
}
double Paquete::getCostoxkg(){
    return costoxkg;
}
double Paquete::calculaCosto(){
    cout<<"Objeto paquete:"<<getCosto() + cargoAdicional<<endl;;
    return getCosto() + cargoAdicional;
}
