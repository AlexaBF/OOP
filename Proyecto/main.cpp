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

    reserva.crearUsuario("LorenzoBartollini","Test123.?",120010);
    reserva.crearUsuario("PatricioCS","sha123",840);
    reserva.crearUsuario("CarmenElizabethJCC","spk12",345823);

    reserva.crearUsuario("PatricioCS","sha123",840);

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
    
    int selecciona=0;
    cout<<"\n Digite 1,2,3 o 4 según la opción que necesite"<<endl;
    cout<<"1.Mostrar todos los vuelos"<<endl;
    
    reserva.mostrarVuelos();
    //mostrarPFOD(int selecciona,string _dato)

    //buscar vuelo por destino y/o Fecha
    

    return 0;
}
