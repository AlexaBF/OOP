#pragma once

#include <iostream>
#include <string>
#include "Fecha.h"

using namespace std;

class Empleado{
private:
    string nombreEmp;
    float sueldoEmp;
    Fecha cumpleAniosEmp;
public:
    Empleado();

    string getNombreEmp();
    float getSueldoEmp();
    Fecha getFecha();

    void setNombreEmp(string _nombreEmp);
    void setSueldo(float _sueldoEmp);
    void setFecha(Fecha _fecha);

    void subeSueldo(float _porcentaje);


    ~Empleado();
};

//---------------------------------------CONSTRUCTOR---------------------------------------
Empleado::Empleado(){
    
}
//-------------------------------------GETTERS--------------------------------------------
string Empleado::getNombreEmp(){
    return nombreEmp;
}
float Empleado::getSueldoEmp(){
    return sueldoEmp;
}
Fecha Empleado::getFecha(){
    return cumpleAniosEmp;
}
//-----------------------------------SETTERS---------------------------------------------
void Empleado::setNombreEmp(string _nombreEmp){
    nombreEmp=_nombreEmp;
}
void Empleado::setSueldo(float _sueldoEmp){
    sueldoEmp=_sueldoEmp;
}
void Empleado::setFecha(Fecha _fecha){
    cumpleAniosEmp=_fecha;
}
//----------------------------------FUNCIONES--------------------------------------------
void Empleado::subeSueldo(float _porcentaje){

    /*método recibe como parámetro un porcentaje de incremento entre el 1 y el 10%.
    Si el valor recibido no está dentro de este rango, no se aplicará incremento alguno
    y se mostrará el mensaje en pantalla “Porcentaje inválido, 
    no hay incremento salarial”. Si el porcentaje es correcto, 
    al sueldo del empleado deberá aplicarse el incremento.*/
    if(_porcentaje<1 || _porcentaje>10){
        cout<<"Porcentaje inválido, no hay incremento salarial"<<endl;
    }else{
        float incremento=(sueldoEmp*_porcentaje)/100;
        sueldoEmp+=incremento;
    }
}
//-------------------------------------DESTRUCTOR--------------------------------------
Empleado::~Empleado(){
}
