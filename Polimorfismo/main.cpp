//  Created on 28/05/20.

#include <iostream>
#include <string>
#include "Envio.hpp"
#include "Paquete.hpp"
#include "Sobre.hpp"
using namespace std;

int main()
{

    Envio *vec[4];
    vec[0]=new Envio("Alexa","88","Cuernavaca","Morelos", "62222","yee","123","Jojutla", "Morelos", "92452");
    vec[0]->calculaCosto();
    vec[1]=new Paquete("Alexa","88","Cuernavaca","Morelos", "62222","yee","123","Jojutla", "Morelos", "92452", 30,30,30,50,5.50);
    vec[1]->calculaCosto();
    vec[3]=new Sobre("Alexa","88","Cuernavaca","Morelos", "62222","yee","123","Jojutla", "Morelos", "92452",35,27);
    vec[3]->calculaCosto();
    

    return 0;
}
