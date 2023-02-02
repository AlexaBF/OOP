/*
Nombre: Alexa Basurto Flores
Matrícula:A01422793
descripción: examen
fecha de creación: 02/02/2023
*/

#include <iostream>
#include "Empleado.h"
#include "Fecha.h"

using namespace std;


int main(){
    int empleado=0,menu=0;
    float sueldo=0;

    Empleado emp1;
    Fecha fecha1;
    Empleado emp2;
    Fecha fecha2;

    emp1.setNombreEmp("Pepe");
    emp1.setSueldo(10000);
    fecha1.setDia(19);
    fecha1.setMes(5);
    emp1.setFecha(fecha1);

    emp2.setNombreEmp("Rocio");
    emp2.setSueldo(12000);
    fecha2.setDia(1);
    fecha2.setMes(1);
    emp2.setFecha(fecha1);
    cout<<"Nombre empleado1: "<<emp1.getNombreEmp()<<endl;
    cout<<"Sueldo empleado1: "<<emp1.getSueldoEmp()<<endl;
    cout<<"Cumpleaños empleado1: "<<emp1.getFecha().getDia()<<"/"<<emp1.getFecha().getMes()<<endl;
    cout<<"\nNombre empleado2: "<<emp2.getNombreEmp()<<endl;
    cout<<"Sueldo empleado2: "<<emp2.getSueldoEmp()<<endl;
    cout<<"Cumpleaños empleado2: "<<emp2.getFecha().getDia()<<"/"<<emp2.getFecha().getMes()<<endl;

    cout<<"Selecciona un empleado con el dígito 1 o 2: "<<endl;
    cin>>empleado;
    while(empleado>2 || empleado <1){
        cout<<"Selecciona un empleado con el dígito 1 o 2: "<<endl;
        cin>>empleado;
    }

    cout<<"Ingresa el dígito 1 para subir el sueldo del empleado o el dígito 2 para salir"<<endl;
    cout<<"-->";
    cin>>menu;
    while(menu>2 || menu <1){
        cout<<"Ingresa el dígito 1 para subir el sueldo del empleado o el dígito 2 para salir"<<endl;
        cout<<"-->";
        cin>>menu;
    }

    if(menu==1){
        cout<<"Ingresa el porcentaje de sueldo que deseas agregar: ";
        cin>>sueldo;
        if (empleado==1){
            emp1.subeSueldo(sueldo);
            cout<<"Nuevo sueldo de "<<emp1.getNombreEmp()<<": "<<emp1.getSueldoEmp();
        }else{
            emp2.subeSueldo(sueldo);
            cout<<"Nuevo sueldo de "<<emp2.getNombreEmp()<<": "<<emp2.getSueldoEmp();
        } 
    }

    return 0;
}