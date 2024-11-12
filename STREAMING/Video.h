//  Created on 11/06/20.

#ifndef Video_H
#define Video_H

#include <iostream>
#include <string>
using namespace std;

class Video{
private: //atributos
    
    int tipo,id;
    string nombre,genero;
    float duracion;
public: //metodos
    //constructor
    Video(int,int,string,string,float);
    //independientes
    void leerArchivo();
    void mostrarVideo();
    virtual ~Video();
};



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

#endif
