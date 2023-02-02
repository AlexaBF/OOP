/*
Nombre: Alexa Basurto Flores
Matrícula: A01422793
Descripción: reservación y visualización de vuelos.
*/
#include <iostream>
#include "Reserva.h"

using namespace std;

int main(){
    Reserva reserva;
    string user, pass;
    cout<<"Ingresa usuario: ";
    cin>>user;
    cout<<"Ingresa contraseña: ";
    cin>>pass;

    while(reserva.iniciaSesion(user,pass)==false){
        cout<<"--Intente de nuevo--"<<endl;
        cout<<"Ingresa usuario: ";
        cin>>user;
        cout<<"Ingresa contraseña: ";
        cin>>pass;
        
    }
    
    return 0;
}
