//
//  Serie.hpp
//  STREAMING
//
//  Created by Alexa Basurto on 11/06/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//

#ifndef Serie_hpp
#define Serie_hpp

#include <stdio.h>
#include <string>
#include "Video.hpp"
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
#endif /* Serie_hpp */
