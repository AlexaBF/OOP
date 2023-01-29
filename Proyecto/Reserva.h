#pragma once

#include <iostream>
#include <vector>

#include "Usuario.h"
#include "Aerolinea.h"
using namespace std;

class Reserva{
private:
    vector<Usuario> usuarios;
    vector<Aerolinea> aerolineas;
public:
    Reserva(/* args */);

    void cancelarReserva();
    void registrarReserva();

    void iniciaSesion(string _user, string _pass);

    void crearUsuario(string _usuario,string _password);
    void borrarUsuario(string _usuario,string _password);

    ~Reserva();
};

Reserva::Reserva(){
}


void Reserva::iniciaSesion(string _user, string _pass){
    for (int i = 0; i < usuarios.size(); i++){
        if(usuarios[i].getUsuario()==_user && usuarios[i].getPassword()==_pass){
            cout<<"Inicio Sesión Correctamente"<<endl;

        }else{
            cout<<"Usuario o Contraseña incorrectos"<<endl;
        }
        
    }
    
}


Reserva::~Reserva()
{
}

