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

    bool iniciaSesion(string _user, string _pass);

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

//------------------------------------------USUARIO------------------------------------------------
void Reserva::crearUsuario(string _usuario,string _password){
    Usuario user;
    user.setUsuario(_usuario);
    user.setPassword(_password);
    user.setKm(0);
    usuarios.push_back(user);
}
void Reserva::borrarUsuario(string _usuario,string _password){
    for (int i = 0; i < usuarios.size(); i++){
        if(usuarios[i].getUsuario()==_usuario && usuarios[i].getPassword()==_password){
            usuarios[i].~Usuario();//borrar de memoria
            usuarios.erase(usuarios.begin() + i);//borrar del vector
            break;//salir de for
        }
    }
    
}
//------------------------------------------------------------------------------------------------
//-------------------------------------------AEROLÍNEA-----------------------------------------------------
void Reserva::crearAerolinea(string _nombre){
    Aerolinea aereo;
    aereo.setNombre(_nombre);
    aerolineas.push_back(aereo);
}
void Reserva::borrarAerolinea(string _nombre){
    for (int i = 0; i < aerolineas.size(); i++){
        if(aerolineas[i].getNombre()==_nombre){
            aerolineas[i].~Aerolinea();//borrar de memoria
            aerolineas.erase(aerolineas.begin() + i);//borrar del vector
            break;//salir de for
        }
    }
}
//------------------------------------------------------------------------------------------------
//---------------------------------------INICIA SESIÓN-------------------------------------------------
bool Reserva::iniciaSesion(string _user, string _pass){
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
    return flag;
}

//------------------------------------------------------------------------------------------------

Reserva::~Reserva(){
}

