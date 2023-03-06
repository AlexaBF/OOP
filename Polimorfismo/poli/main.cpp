// Aplicacion para probar polimorfismo
// MLBC

#include <iostream>
#include "Persona.h"
#include "Profesor.h"
#include "Alumno.h"

using namespace std;

int main()

{

    /*Alumno Lalo;

    Persona laPersona;

    Profesor Jorge;

    Lalo.imprimeDatos();
    laPersona.imprimeDatos();
    Jorge.imprimeDatos();*/
/*
    int *x, y = 20;

    x = &y;
    y = 25;
    cout<<"x = "<<x<<" *x = "<<*x<<endl;

    int *z = new int(10);
    cout<<"z= "<<*z<<endl;
    */

    // Polimorfismo

    int numeroPersonas, numeroProfesores, numeroAlumnos;
    cout<<"Cuantas personas quieres: ";
    cin>>numeroPersonas;
    cout<<"Cuantos profesores: ";
    cin>>numeroProfesores;
    cout<<"Cuantos alumnos: ";
    cin>>numeroAlumnos;

    // Declaro y construyo un apuntador a objetos de tipo Persona

    Persona *apuntaAPersona[numeroPersonas];


    // aseguro de llenar cada espacio con el tipo de objeto que requiero

    for (int i = 0; i < numeroPersonas; i++){
        if ( i < numeroProfesores)
            apuntaAPersona[i] = new Profesor("nombre del profe", "telefono del profe", 30, "nomina del profe", 12);
        else
            apuntaAPersona[i] = new Alumno();
    }


    // imprimo los datos de los objetos que construi
    for (int i = 0; i < numeroPersonas; i++)
        apuntaAPersona[i]->imprimeDatos();


    return 0;
}
