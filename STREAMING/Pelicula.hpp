//
//  Pelicula.hpp
//  STREAMING
//
//  Created by Alexa Basurto on 11/06/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//

#ifndef Pelicula_hpp
#define Pelicula_hpp

#include <stdio.h>
#include <string>
#include "Video.hpp"
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
#endif /* Pelicula_hpp */
