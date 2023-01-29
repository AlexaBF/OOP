#pragma once
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

    ~Usuario();
};

Usuario::Usuario(){
    kmAcumulados=0;
}


string Usuario::getUsuario(){
    return usuario;
}
string Usuario::getPassword(){
    return password;
}



Usuario::~Usuario(){
}
