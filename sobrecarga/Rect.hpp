//  Created on 03/06/20.

#ifndef Rect_hpp
#define Rect_hpp

#include <stdio.h>
class Rect{
private://atributos
    int x;
    int y;
public: //metodos
    //constructores
    Rect();
    Rect(int,int);
    //sobrecarga tipo "+"
    Rect operator+(const Rect& val){
        Rect temp;
        temp.x=this->x + val.x;
        temp.y=this->y + val.y;
        return temp;
    }
    
    //get
    int getX();
    int getY();
};

#endif /* Rect_hpp */
