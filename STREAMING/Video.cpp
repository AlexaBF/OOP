//  Created on 11/06/20.

#include "Video.hpp"
#include <fstream>
#include "Serie.hpp"
#include "Pelicula.hpp"
using namespace std;
//ifstream vid("Videos.txt");

Video::Video(int _tipo,int _id,string _nombre,string _genero,float _duracion){
    tipo=_tipo;
    id=_id;
    nombre=_nombre;
    genero=_genero;
    duracion=_duracion;
}


void Video::leerArchivo(){
    FILE *fp;
    int c;
    fp=fopen("Videos.txt","r");
    while (1) {
        c=fgetc(fp);
        if (feof(fp)) {
            break;
        }
        printf("%c",c);
    }
    fclose(fp);
}


void Video::mostrarVideo(){
    cout<<"ID: "<<id<<" | Tipo: "<<tipo<<" | Nombre: "<<nombre<<" | Género: "<<genero<<" | Duración: "<<duracion<<" min | "<<endl;
}


Video::~Video(){
}
