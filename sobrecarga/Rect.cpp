//
//  Rect.cpp
//  sobrecarga
//
//  Created by Alexa Basurto on 03/06/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//

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
