/*
Nombre: Alexa Basurto FlosinRepetir
Matrícula: A01422793
Fecha de creación: 19/01/2023
Descripción: clase de Automovil
*/
#pragma once

#include <iostream>
#include <string>
using namespace std;

class Automovil{
private:
    string marca;
    string modelo;
    string anio;
    float kilometraje;
    int numPasajeros;
    string color;
    float rendimientos;
    float capacidadTanque;
    float gasolinaEnTanque;

public:
    Automovil();

    string getMarca();
    string getModelo();
    string getAnio();
    float getKilometraje();
    int getnumPasajeros();
    float getRendimiento();
    float getCapacidadTanque();
    float getGasolinaEnTanque();

    void setMarca(string _marca);
    void setModelo(string _modelo);
    void setAnio(string _anio);
    void setKilometraje(float _kilometraje);
    void setnumPasajeros(int _numPasajeros);
    void setColor(string _color);
    void setRendimientos(float _rendimientos);
    void setCapacidadTanque(float _capacidadTanque);
    void setGasolinaEnTanque(float _gasolinaTanque);

    void avanzaAutomovil(float distancia, int pasajeros);
    float calculaConsumo(float distancia, int pasajeros);
    void llenaTanque();
    void imprimeAutomovil();
    bool requiereMantenimiento();
    float validaGasolinaEnTanque();

    ~Automovil();
};

//-------------------------------------CONSTRUCTOR-------------------------------------------
Automovil::Automovil(){
    marca = "KIA";
    modelo = "RIO";
    anio = "2023";
    kilometraje = 0;
    numPasajeros = 5;
    color = "Gris";
    rendimientos = 14.39;
    capacidadTanque = 45;
    gasolinaEnTanque = 20;
}
//--------------------------------------------------------------------------------------------

//--------------------------------------GETTERS-----------------------------------------------
string Automovil::getMarca(){
    return marca;
}
string Automovil::getModelo(){
    return modelo;
}
string Automovil::getAnio(){
    return anio;
}
float Automovil::getKilometraje(){
    return kilometraje;
}
int Automovil::getnumPasajeros(){
    return numPasajeros;
}
float Automovil::getRendimiento(){
    return rendimientos;
}
float Automovil::getCapacidadTanque(){
    return capacidadTanque;
}
float Automovil::getGasolinaEnTanque(){
    return gasolinaEnTanque;
}
//--------------------------------------------------------------------------------------------

//--------------------------------------SETTERS-----------------------------------------------
void Automovil::setMarca(string _marca){
    marca = _marca;
}
void Automovil::setModelo(string _modelo){
    modelo = _modelo;
}
void Automovil::setAnio(string _anio){
    anio = _anio;
}
void Automovil::setKilometraje(float _kilometraje){
    kilometraje = _kilometraje;
}
void Automovil::setnumPasajeros(int _numPasajeros){
    numPasajeros = _numPasajeros;
}
void Automovil::setColor(string _color){
    color = _color;
}
void Automovil::setRendimientos(float _rendimientos){
    rendimientos = _rendimientos;
}
void Automovil::setCapacidadTanque(float _capacidadTanque){
    capacidadTanque = _capacidadTanque;
}
void Automovil::setGasolinaEnTanque(float _gasolinaTanque){
    gasolinaEnTanque = _gasolinaTanque;
}
//---------------------------------------------------------------------------------------------
//-----------------------------------FUNCIONES-------------------------------------------------
//CALCULA SI EL AUTO PUEDE AVANZAR O NO PUEDE AVANZAR
void Automovil::avanzaAutomovil(float distancia, int pasajeros){
    float consumo=calculaConsumo(distancia,pasajeros);
    //debe haber suficiente gasolina (valor de regreso de
    //calculaConsumo, debe ser mayor o igual a cero y no requerir mantenimiento
    //(valor de regreso de requiereMantenimiento, debe ser falso).
    if(consumo>=0 && requiereMantenimiento()==false){
        /*Si el avance del automóvil es posible, el método desplegará el mensaje
        “Avance confirmado”, actualizará el valor de kilometraje sumándole
        la distancia recorrida y restará la gasolina consumida a gasolinaEnTanque.*/
        cout<<"\nAvance confirmado"<<endl;
        kilometraje+=distancia;
        gasolinaEnTanque-=consumo;
    }
    /*
    De lo contrario, no modificará ningún atributo y desplegará alguno o los
    dos mensajes según la condición presentada: “No hay suficiente gasolina”
    y/o “Mantenimiento requerido”.
    */
    else if(gasolinaEnTanque<consumo || consumo==-1){
        cout<<"\nNo hay suficiente gasolina"<<endl;
    }
    requiereMantenimiento();
}
//CALCULA LA CANTIDAD DE GASOLINA QUE SE REQUIERE PARA AVANZAR
float Automovil::calculaConsumo(float distancia, int pasajeros){
    //Si el automóvil va lleno (viajan todos los pasajeros que caben según numPasajeros),
    //agrega 5% extra de consumo de gasolina a lo calculado por el rendimiento;
    float cantidadLitros = distancia*rendimientos;
    if(numPasajeros==pasajeros){
        cantidadLitros+= cantidadLitros*0.05;
    }
    //si viajan menos de la mitad de los pasajeros de su capacidad, resta 4% al
    //consumo calculado.
    else if(numPasajeros/2>pasajeros){
        cantidadLitros-=cantidadLitros*0.04;
    }
    //El método regresará la cantidad de litros requeridos para que el
    //automóvil avance. Regresará -1 si el automóvil no tiene suficiente
    //gasolina para avanzar.
    if(cantidadLitros>gasolinaEnTanque){
        return -1;
    }else{
        return cantidadLitros;
    }
}
//LLENAR EL TANQUE DEL AUTO
void Automovil::llenaTanque(){
    int cantidad = capacidadTanque - gasolinaEnTanque;
    gasolinaEnTanque += cantidad;
    cout<<"Cantidad de gasolina que requiere el automóvil para estar lleno "<<cantidad<<" litros."<<endl;
    cout<<"Tanque lleno"<<endl;
}
//IMPRIME TODA LA INFORMACIÓN DEL AUTO
void Automovil::imprimeAutomovil(){
    cout<<"\n----Datos del Automóvil----"<<endl;
    cout<<"Marca: "<<marca<<endl;
    cout<<"Modelo: "<<modelo<<endl;
    cout<<"Anio: "<<anio<<endl;
    cout<<"Kilometraje: "<<kilometraje<<endl;
    cout<<"Número de Puertas: "<<numPasajeros<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Rendimiento: "<<rendimientos<<endl;
    cout<<"Capacidad en Tanque: "<<capacidadTanque<<endl;
    cout<<"Gasolina en Tanque: "<<gasolinaEnTanque<<endl;
}
//CHECAR KILOMETRAJE DEL AUTO  
bool Automovil::requiereMantenimiento(){
    //Regresa true o false si el mantenimiento es requerido
    if (kilometraje >= 10000){
        cout<<"\nMantenimiento requerido"<<endl;
        return true;
    }else{
        return false;
    }
}
//VALIDA LA GASOLINA EN TANQUE SEA MENOR A LA CAPACIDAD EN TANQUE
float Automovil::validaGasolinaEnTanque(){
    while (gasolinaEnTanque > capacidadTanque){
        cout<<"\nGasolina en tanque es mayor a la capacidad en tanque"<<endl;
        cout<<"\nVuelve a ingresar la gasolina en tanque: ";
        cin>>gasolinaEnTanque;
    }
    return gasolinaEnTanque;
}
//-----------------------------------------------------------------------------------------------

//-----------------------------------DESTRUCTOR----------------------------------------------------
Automovil::~Automovil(){
}
