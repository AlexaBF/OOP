/*
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
    float pasajeros; 
    cin>>pasajeros; 
    miCoche.avanzaAutomovil(distancia,pasajeros); 
    miCoche.imprimeAutomovil(); 
    miCoche.llenaTanque(); 
    miCoche.imprimeAutomovil(); 
    return 0; 
}
