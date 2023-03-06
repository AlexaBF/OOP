#include "Persona.h"

Persona::Persona(){
    nombre = "un nombre";
    telefono = "un telefono";
    edad = 19;
}

Persona::Persona(string nom, string tel, int ed){
    nombre = nom;
    telefono = tel;
    edad = ed;
}

Persona::~Persona(){
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getTelefono(){
    return telefono;
}

int Persona::getEdad(){
    return edad;
}

void Persona::setNombre(string n){
    nombre = n;
}

void Persona::setTelefono(string t){
    telefono = t;
}

void Persona::setEdad(int ed){
    edad = ed;
}

void Persona::imprimeDatos(){
    cout<<"Nombre: "<<nombre<<" "<<"telefono: "<<telefono<<" edad: "<<edad<<endl;
}
