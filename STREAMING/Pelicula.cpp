//  Created on 11/06/20.

#include "Pelicula.hpp"
#include "Video.hpp"
#include <iostream>
#include <string>
using namespace std;
Pelicula::Pelicula(int _id,int _tipo,string _nombre,string _genero,float _duracion,float _calificacion):Video(_id, _tipo, _nombre, _genero, _duracion){
    
    calificaciones=_calificacion;
}

void Pelicula::leerArchivoP(){
    leerArchivo();
    FILE *fp;
    int c;
    fp=fopen("/Users/alexabasurto/Desktop/STREAMING/STREAMING/Peli.txt","r");
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
