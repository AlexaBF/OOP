//  Created on 28/05/20.

#include "Envio.hpp"
#include <string>
#include <iostream>

const double COSTOBASE = 50.0;
Envio::Envio()
{
    nombreR = "";
    direccionR = "";
    ciudadR = "";
    estadoR = "";
    cpR = "";
    nombreD = "";
    direccionD = "";
    ciudadD = "";
    estadoD = "";
    cpD = "";
    costo = COSTOBASE;
}

Envio::Envio(string nr, string dr, string cr, string er, string cpr, string nd, string dd, string cd, string ed, string cpd){
    nombreR = nr;
    direccionR = dr;
    ciudadR = cr;
    estadoR = er;
    cpR = cpr;
    nombreD = nd;
    direccionD = dd;
    ciudadD = cd;
    estadoD = ed;
    cpD = cpd;
    costo = COSTOBASE;

}
Envio::~Envio()
{
    //destructor
}

void Envio::setNombreR(string n){
    nombreR = n;
}

void Envio::setDireccionR(string d){
    direccionR = d;
}

void Envio::setCiudadR(string c){
    ciudadR = c;
}
void Envio::setEstadoR(string e){
    estadoR = e;
}
void Envio::setCPR(string c){
    cpR = c;
}

void Envio::setNombreD(string n){
    nombreD = n;
}
void Envio::setDireccionD(string d){
    direccionD = d;
}
void Envio::setCiudadD(string c){
    ciudadD = c;
}

void Envio::setEstadoD(string e){
    estadoD = e;
}
void Envio::setCPD(string c){
    cpD = c;
}

void Envio::setCosto(double c){
    costo = c;
}
string Envio::getNombreR(){
    return nombreR;
}
string Envio::getDireccionR(){
    return direccionR;
}
string Envio::getCiudadR(){
    return ciudadR;
}
string Envio::getEstadoR(){
    return estadoR;
}
string Envio::getCPR(){
    return cpR;
}

string Envio::getNombreD(){
    return nombreD;
}
string Envio::getDireccionD(){
    return direccionD;
}

string Envio::getCiudadD(){
    return ciudadD;
}
string Envio::getEstadoD(){
    return estadoD;
}

string Envio::getCOD(){
    return cpD;
}
double Envio::getCosto(){
    return costo;
}

double Envio::calculaCosto(){
    cout<<"Envio: "<<costo<<endl;
    return costo;
}
