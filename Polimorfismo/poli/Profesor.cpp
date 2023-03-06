#include "Profesor.h"

Profesor::Profesor(){
    //ctor
}

Profesor::Profesor(string nom, string tel, int ed, string nomi, int depa):Persona(nom, tel, ed){
    nomina = nomi;
    departamentoAcademico = depa;
}

Profesor::~Profesor(){
    //dtor
}

void Profesor::setDepartamentoAcademico(int d){
    departamentoAcademico = d;
}

void Profesor::setNomina(string n){
    nomina = n;
}

void Profesor::imprimeDatos(){
    cout<<"\n\n\tImprimo los datos de un profesor\n";
    cout<<"Nomina: "<<nomina<<" Departamento: "<<departamentoAcademico<<endl;
}
