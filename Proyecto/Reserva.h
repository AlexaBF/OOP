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
    Reserva();

    void cancelarReserva();
    void registrarReserva();

    void iniciaSesion(string _user, string _pass);

    void crearUsuario(string _usuario,string _password);
    void borrarUsuario(string _usuario,string _password);

    void crearAerolinea(string _nombre);
    void borrarAerolinea(string _nombre);

    ~Reserva();
};

Reserva::Reserva(){
}

//-------------------------------------RESERVAR-----------------------------------------------------------
void Reserva::registrarReserva(){
    for (int i = 0; i < aerolineas.size(); i++){
        cout<<"Aerolínea: "<<aerolineas[i].getNombre();
    }
    
    
}

//------------------------------------------------------------------------------------------------

//---------------------------------------INICIA SESIÓN-------------------------------------------------
void Reserva::iniciaSesion(string _user, string _pass){
    bool flag=false;
    for (int i = 0; i < usuarios.size(); i++){
        if(usuarios[i].getUsuario()==_user && usuarios[i].getPassword()==_pass){      
            flag=true;
            break;
        } 
    }

    if(flag){
        cout<<"Inicio Sesión Correctamente"<<endl;
    }else{
        cout<<"Usuario o Contraseña incorrectos"<<endl;
    }
    
}

//------------------------------------------------------------------------------------------------

Reserva::~Reserva()
{
}

