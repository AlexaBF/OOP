//
//  main.cpp
//  sobrecarga
//
//  Created by Alexa Basurto on 03/06/20.
//  Copyright © 2020 Alexa Basurto. All rights reserved.
//

#include <iostream>
#include "Rect.hpp"
using namespace std;
int main() {
    Rect r1(1,2);
    Rect r2(3,4);
    Rect r3;
    r3=r1+r2;
    cout<<r3.getX()<<" "<<r3.getY()<<endl;
    return 0;
}
