/*
Nombre: Alexa Basurto Flores
Matrícula: A01422793
Descripción: reservación y visualización de vuelos.
*/
#include <iostream>
#include "Reserva.h"

using namespace std;

void menu(){
    cout<<"\nDigite 1,2,3,4,5 según la opción que necesite"<<endl;
    cout<<"1.Mostrar todos los vuelos"<<endl;
    cout<<"2.Mostrar todos los vuelos con una fecha específica (ejemplo: 21/junio/2023)"<<endl;
    cout<<"3.Mostrar todos los vuelos con el Destino (ejemplo:Los Angeles, Cancún)"<<endl;
    cout<<"4.Registrar reservación"<<endl;
    cout<<"5.Cancelar reservación"<<endl;
    cout<<"0.Salir"<<endl;
    cout<<"--->";
}

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
    menu();
    cin>>selecciona;
    while (selecciona>5 ||selecciona<0){
        cout<<"\nDigite 1,2,3,4,5,0 según la opción que necesite"<<endl;
        cout<<"--->";
        cin>>selecciona;
    }
    
    string dato="";
    int as=1;
    while (selecciona!=0){
        switch (selecciona){
        case 0:
            cout<<"--Sesión cerrada--"<<endl;
            break;
        case 1:
            reserva.mostrarVuelos();
            menu();
            cin>>selecciona;
            break;
        case 2:
            cout<<"\nIngresa la fecha a buscar en este formato '21/junio/2023' : ";
            cin>>dato;
            reserva.mostrarPFOD(2,dato);
            menu();
            cin>>selecciona;
            break;
        case 3:
            cout<<"\nIngresa el destino a buscar (ejemplo:Los Angeles, Cancún): ";
            cin>>dato;
            reserva.mostrarPFOD(1,dato);
            menu();
            cin>>selecciona;
            break;
        case 4:
            cout<<"\nPara reservar ingresa el Número de vuelo (ejemplo:AM208): ";
            cin>>dato;
            cout<<"y la cantidad de asientos a reservar: ";
            cin>>as;
            reserva.registrarReserva(dato,as);
            menu();
            cin>>selecciona;
            break;
        case 5:
            reserva.cancelarReserva();
            menu();
            cin>>selecciona;
            break;
        default:
            cout<<"\nDigite 1,2,3,4,5,0 según la opción que necesite"<<endl;
            cout<<"--->";
            cin>>selecciona;
            break;
        }
    }
    
    


    return 0;
}
