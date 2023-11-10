#pragma once
/*
Descripción: Clase Usuario
última fecha de Modificación: 07/02/2023
*/
#include <iostream>
#include <string>

using namespace std;

class Usuario{
private:
    string usuario, password;
    int kmAcumulados;
public:
    Usuario();

    string getUsuario();
    string getPassword();
    int getKm();
    void setUsuario(string _user);
    void setPassword(string _pass);
    void setKm(int _km);

    ~Usuario();
};
//------------------------------------------------------------------------------------------------
//--------------------------------------------CONSTRUCTOR--------------------------------------------
Usuario::Usuario(){
    kmAcumulados=0;
}
//------------------------------------------------------------------------------------------------
//------------------------------------------GETTERS---------------------------------------------
string Usuario::getUsuario(){
    return usuario;
}
string Usuario::getPassword(){
    return password;
}
int Usuario::getKm(){
    return kmAcumulados;
}
//------------------------------------------------------------------------------------------------
//---------------------------------------------SETTERS-------------------------------------------
void Usuario::setUsuario(string _user){
    usuario=_user;
}
void Usuario::setPassword(string _pass){
    password=_pass;
}
void Usuario::setKm(int _km){
    kmAcumulados=_km;
}
//------------------------------------------------------------------------------------------------
//------------------------------------------DESTRUCTOR----------------------------------------
Usuario::~Usuario(){
}
