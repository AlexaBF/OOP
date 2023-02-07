#pragma once

#include <iostream>
#include <vector>
#include <fstream>

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

    void cancelarReserva(string _noVuelo,int _asientos);
    void registrarReserva(string _noVuelo,int _asientos);

    void mostrarVuelos();
    void mostrarPFOD(int _selecciona,string _dato);

    bool iniciaSesion(string _user, string _pass);

    void crearUsuario(string _usuario,string _password,int _kmA);
    void borrarUsuario(string _usuario,string _password);

    void agregarVuelos(string _nombre,string _noVuelo,string _destino
    ,string _duracionViaje,string _detallesAvion,string _fecha
    ,int _precio,int _km,int _asientosDisponibles,int _asientosTotales);


    ~Reserva();
};

Reserva::Reserva(){
    //VUELOS
    string nombre,noVuelo, destino, duracionViaje,detallesAvion,fecha;
    int precio,km,asientosDisponibles,asientosTotales;
    string line;
    int cuenta=0;
    ifstream myfile ("vuelos.txt");
    if (myfile.is_open()){
        while ( getline (myfile,line) ){
            switch (cuenta){
            case 0:
                nombre=line;
                cuenta++;
                break;
            case 1:
                noVuelo=line;
                cuenta++;
                break;
            case 2:
                destino=line;
                cuenta++;
                break;
            case 3:
                duracionViaje=line;
                cuenta++;
                break;
            case 4:
                detallesAvion=line;
                cuenta++;
                break;
            case 5:
                fecha=line;
                cuenta++;
                break;
            case 6:
                precio=stoi(line);
                cuenta++;
                break;
            case 7:
                km=stoi(line);
                cuenta++;
                break;
            case 8:
                asientosDisponibles=stoi(line);
                cuenta++;
                break;
            case 9:
                asientosTotales=stoi(line);
                cuenta=0;
                agregarVuelos(nombre,noVuelo,destino,duracionViaje,detallesAvion,fecha
                ,precio,km,asientosDisponibles,asientosTotales);
                break;

            default:
                break;
            }            
        }
        myfile.close();
    }
    else{
        cout << "No es posible registrar los vuelos";
    }
    //------------------------------------------------
    //USUARIOS
    cuenta=0;
    string usuario, password;
    int kmAcumulados;
    ifstream myfile2 ("usuarios.txt");
    if (myfile2.is_open()){
        while ( getline (myfile2,line) ){
            switch (cuenta){
            case 0:
                usuario=line;
                cuenta++;
                break;
            case 1:
                password=line;
                cuenta++;
                break;

            case 2:
                kmAcumulados=stoi(line);
                cuenta=0;
                crearUsuario(usuario,password,kmAcumulados);
                break;
            default:
                break;
            }
            
        }
        myfile2.close();
    }
    else{
        cout << "No es posible registrar los usuarios";
    } 
	
}

//-------------------------------------RESERVAR-----------------------------------------------------------
void Reserva::registrarReserva(string _noVuelo,int _asientos){
    //buscar vuelo
    int vueloReserva=0;
    for (int i = 0; i < vuelos.size(); i++){
        if(vuelos[i].getNoVuelo()==_noVuelo){
            vueloReserva=i;
            break;
        }
    }

    int nuevosAsientos=vuelos[vueloReserva].getAsientosDisponibles()-_asientos;
    if(nuevosAsientos<0){//se quiere mas de lo disponible
        cout<<"\nEsa cantidad de asientos no esta disponible"<<endl;
    }else{
        cout<<"\nVuelo antes de reserva"<<endl;
        vuelos[vueloReserva].mostrarVuelo();

        cout<<"\nTienes "<<usuarios[usuarioActual].getKm()<<" km acumulados."<<endl;

        cout<<"\nVuelo reservado"<<endl;
        vuelos[vueloReserva].setAsientosDisponibles(nuevosAsientos);
        vuelos[vueloReserva].mostrarVuelo();
        int gasto=(vuelos[vueloReserva].getPrecio())*_asientos;
        if(usuarios[usuarioActual].getKm()>50000){//iene más de 50,000 km aplica 40% de descuento
            gasto= gasto * .4;
            cout<<"\nPrecio Final con 40 porciento de descuento $"<<gasto<<endl;
        }else{
            cout<<"\nPrecio Final $"<<gasto<<endl;
        }
        
        int nuevosKm=vuelos[vueloReserva].getKm() + usuarios[usuarioActual].getKm();
        usuarios[usuarioActual].setKm(nuevosKm);
        cout<<"\nKilómetros acumulados finales "<<usuarios[usuarioActual].getKm()<<endl;
    }
    
    

}

void Reserva::cancelarReserva(string _noVuelo,int _asientos){
    //buscar vuelo
    int vueloReserva=0;
    for (int i = 0; i < vuelos.size(); i++){
        if(vuelos[i].getNoVuelo()==_noVuelo){
            vueloReserva=i;
            break;
        }
    }

    int nuevosAsientos=vuelos[vueloReserva].getAsientosDisponibles()+_asientos;
    if(nuevosAsientos>vuelos[vueloReserva].getAsientosTotales()){//se quiere mas de lo disponible
        cout<<"\nEsa cantidad de asientos no es posible"<<endl;
    }else{
        cout<<"\nVuelo antes de cancelación"<<endl;
        vuelos[vueloReserva].mostrarVuelo();

        cout<<"\nTienes "<<usuarios[usuarioActual].getKm()<<" km acumulados."<<endl;

        cout<<"\nVuelo cancelado"<<endl;
        vuelos[vueloReserva].setAsientosDisponibles(nuevosAsientos);
        vuelos[vueloReserva].mostrarVuelo();
        
        int nuevosKm=usuarios[usuarioActual].getKm() - vuelos[vueloReserva].getKm();
        usuarios[usuarioActual].setKm(nuevosKm);
        cout<<"\nKilómetros acumulados finales despues de cancelación "<<usuarios[usuarioActual].getKm()<<endl;
    }

}

//------------------------------------------------------------------------------------------------

//------------------------------------------USUARIO------------------------------------------------
void Reserva::crearUsuario(string _usuario,string _password,int _kmA){
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
        user.setKm(_kmA);
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
        cout<<"-----------------------------------------------"<<endl;
        vuelos[i].mostrarVuelo();
        cout<<"-----------------------------------------------"<<endl;
    }
    
}

//mostrar por fecha o destino
void Reserva::mostrarPFOD(int selecciona,string _dato){
    if(selecciona==1){//mostrar vuelos con ese destino
        for (int i = 0; i < vuelos.size(); i++){
            if(vuelos[i].getDestino()==_dato){
                cout<<"-----------------------------------------------"<<endl;
                vuelos[i].mostrarVuelo();
                cout<<"-----------------------------------------------"<<endl;
            }
        }

    }else{//mostrar vuelos con esa fecha
        for (int i = 0; i < vuelos.size(); i++){
            if(vuelos[i].getFecha()==_dato){
                cout<<"-----------------------------------------------"<<endl;
                vuelos[i].mostrarVuelo();
                cout<<"-----------------------------------------------"<<endl;
            }
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

