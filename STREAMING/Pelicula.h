//  Created on 11/06/20.

#ifndef Pelicula_H
#define Pelicula_H 


#include <iostream>
#include <string>

#include "Video.h"
using namespace std;

class Pelicula:public Video{
private:
    float calificaciones;
public:
    Pelicula(int,int,string,string,float,float);
    
    void leerArchivoP();
    void mostrarPelicula();
    
    virtual ~Pelicula();
};


Pelicula::Pelicula(int _id,int _tipo,string _nombre,string _genero,float _duracion,float _calificacion):Video(_id, _tipo, _nombre, _genero, _duracion){
    
    calificaciones=_calificacion;
}

void Pelicula::leerArchivoP(){
    leerArchivo();
    FILE *fp;
    int c;
    fp=fopen("Peli.txt","r");
    while (1) {
        c=fgetc(fp);
        if (feof(fp)) {
            break;
        }
        printf("%c",c);
    }
    fclose(fp);
}

void Pelicula::mostrarPelicula(){
    mostrarVideo();
    cout<<" | Calif: "<<calificaciones<<endl;
}


Pelicula::~Pelicula(){
}

#endif
