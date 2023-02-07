#pragma once

#include <iostream>
#include <vector>

#include "Usuario.h"
#include "Vuelo.h"
using namespace std;

class Reserva{
private:
    vector<Usuario> usuarios;
    vector<Vuelo> vuelos;
    vector<string> fechas;
    int usuarioActual;
public:
    Reserva();

    void cancelarReserva();
    void registrarReserva();

    void mostrarVuelos();
    void mostrarFechasDisponibles();

    bool iniciaSesion(string _user, string _pass);

    void crearUsuario(string _usuario,string _password);
    void borrarUsuario(string _usuario,string _password);

    void agregarVuelos(string _nombre,string _noVuelo,string _destino
    ,string _duracionViaje,string _detallesAvion,string _fecha
    ,int _precio,int _km,int _asientosDisponibles,int _asientosTotales);


    ~Reserva();
};

Reserva::Reserva(){
    
}

//-------------------------------------RESERVAR-----------------------------------------------------------
void Reserva::registrarReserva(){
    
}

//------------------------------------------------------------------------------------------------

//------------------------------------------USUARIO------------------------------------------------
void Reserva::crearUsuario(string _usuario,string _password){
    //verificar que no exista usuario
    bool flag=false;
    for (int i = 0; i < usuarios.size(); i++){
        if(usuarios[i].getUsuario()==_usuario){      
            flag=true;
            break;
        } 
    }

    //si NO se repite el usuario, crearlo
    if(flag==false){
        Usuario user;
        user.setUsuario(_usuario);
        user.setPassword(_password);
        user.setKm(0);
        usuarios.push_back(user);
    }else{//de lo contrario notificar que ya esta registrado.
        cout<<"Ya existe el usuario: "<<_usuario<<endl;
    }        
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
//-------------------------------------------VUELOS-----------------------------------------------------
void Reserva::agregarVuelos(string _nombre,string _noVuelo,string _destino
    ,string _duracionViaje,string _detallesAvion,string _fecha
    ,int _precio,int _km,int _asientosDisponibles,int _asientosTotales){
    
    Vuelo viaje;
    viaje.crearVuelo(_nombre,_noVuelo,_destino,_duracionViaje,_detallesAvion
    ,_fecha,_precio,_km,_asientosDisponibles,_asientosTotales);
    vuelos.push_back(viaje);
}
void Reserva::mostrarVuelos(){
    for (int i = 0; i < vuelos.size(); i++){
        vuelos[i].mostrarVuelo();
    }
    
}

void Reserva::mostrarFechasDisponibles(){
    for (int i = 0; i < vuelos.size(); i++){
        fechas.push_back(vuelos[i].getFecha());//fechas
    }
    sort(fechas.begin(), fechas.end());
    fechas.erase(std::unique(fechas.begin(), fechas.end()), fechas.end());
    
}

//------------------------------------------------------------------------------------------------
//---------------------------------------INICIA SESIÓN-------------------------------------------------
bool Reserva::iniciaSesion(string _user, string _pass){
    bool flag=false;
    for (int i = 0; i < usuarios.size(); i++){
        if(usuarios[i].getUsuario()==_user && usuarios[i].getPassword()==_pass){      
            flag=true;
            usuarioActual=i;
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

