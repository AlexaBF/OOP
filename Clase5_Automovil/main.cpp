/*
Nombre: Alexa Basurto FlosinRepetir
Matrícula: A01422793
Fecha de creación: 19/01/2023
Descripción: sistema de control de uso de autos
*/
#include <iostream>
#include "Automovil.h"
using namespace std;

int main(){
    cout<<"\nSistema de control de uso de autos\n"; 
    Automovil miCoche;
    miCoche.imprimeAutomovil();
    cout<<"\nQue distancia quieres recorrer?: ";
    float distancia;
    cin>>distancia;
    cout<<"Cuantos pasajeros viajaran?: ";
    int pasajeros;
    cin>>pasajeros; 
    miCoche.avanzaAutomovil(distancia,pasajeros); 
    miCoche.imprimeAutomovil(); 
    miCoche.llenaTanque(); 
    miCoche.imprimeAutomovil();
    return 0;
}