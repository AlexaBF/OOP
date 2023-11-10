//  Created on 11/06/20.

#ifndef Video_hpp
#define Video_hpp

#include <stdio.h>
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
#endif /* Video_hpp */
