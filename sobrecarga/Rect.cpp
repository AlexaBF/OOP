//  Created on 03/06/20.

#include "Rect.hpp"
using namespace std;
Rect::Rect(){
}

Rect::Rect(int _valX,int _valY){
    x=_valX;
    y=_valY;
}

int Rect::getX(){
    return x;
}

int Rect::getY(){
    return y;
}
