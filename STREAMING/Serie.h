//  Created on 11/06/20.

#ifndef Serie_H
#define Serie_H

#include <iostream>
#include <string>
#include "Video.h"
using namespace std;

class Serie:public Video{
private:
    int temporada,episodio;
    string titulo;
    float calif;
public:
    Serie(int,int,string,string,float,int,int,string,float);
    
    void leerArchivoS();
    void mostrarSerie();
    
    virtual ~Serie();
};



Serie::Serie(int _id,int _tipo,string _nombre,string _genero,float _duracion,int _temporada,int _episodio,string _titulo,float _cali):Video(_id, _tipo, _nombre, _genero, _duracion){
    
    temporada=_temporada;
    episodio=_episodio;
    titulo=_titulo;
    calif=_cali;
}

void Serie::leerArchivoS(){
    leerArchivo();
    FILE *fp;
    int c;
    fp=fopen("Serie.txt","r");
    while (1) {
        c=fgetc(fp);
        if (feof(fp)) {
            break;
        }
        printf("%c",c);
    }
    fclose(fp);
}

void Serie::mostrarSerie(){
    mostrarVideo();
    cout<<" | Temporada: "<<temporada<<" | Episodio: "<<episodio<<" | Título: "<<titulo<<" | Calif: "<<calif<<endl;
}

Serie::~Serie(){
}


#endif
