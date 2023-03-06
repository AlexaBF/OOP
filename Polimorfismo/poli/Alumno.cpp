#include "Alumno.h"

Alumno::Alumno()
{
    matricula = "Al0142000";
}

Alumno::~Alumno()
{
    //dtor
}

void Alumno::setMatricula(string m){
    matricula = m;
}

string Alumno::getMatricula(){
    return matricula;
}

void Alumno::imprimeDatos(){
    cout<<"\n\n\tImprimo los datos de un alumno\n";
    cout<<"Matricula: "<<matricula<<endl;
}
