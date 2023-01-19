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
    int numPuertas;
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
    int getNumPuertas();
    float getRendimiento();
    float getCapacidadTanque();
    float getGasolinaEnTanque();

    void setMarca(string _marca);
    void setModelo(string _modelo);
    void setAnio(string _anio);
    void setKilometraje(float _kilometraje);
    void setNumPuertas(int _numPuertar);
    void setColor(string _color);
    void setRendimientos(float _rendimientos);
    void setCapacidadTanque(float _capacidadTanque);
    void setGasolinaEnTanque(float _gasolinaTanque);

    void avanzaAutomovil(float distancia, int pasajeros);
    void calculaConsumo(float distancia, int pasajeros);
    void llenaTanque();
    void imprimeAutomovil();
    bool requiereMantenimiento();
    void validaGasolinaEnTanque();

    ~Automovil();
};

//-------------------------------------CONSTRUCTOR------------------------------------------------
Automovil::Automovil(){
    marca = "KIA";
    modelo = "RIO";
    anio = "2023";
    kilometraje = 0;
    numPuertas = 4;
    color = "Gris";
    rendimientos = 14.39;
    capacidadTanque = 45;
    gasolinaEnTanque = 20;
}
//---------------------------------------------------------------------------------------------

//-------------------------------------GETTERS---------------------------------------------
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
int Automovil::getNumPuertas(){
    return numPuertas;
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
//---------------------------------------------------------------------------------------------

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
void Automovil::setNumPuertas(int _numPuertas){
    numPuertas = _numPuertas;
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
//-----------------------------------FUNCIONES---------------------------------------------------
void Automovil::avanzaAutomovil(float distancia, int pasajeros){
    /*
    recibe los valores de la distancia en kilómetros que se desea avanzar y
    el número de pasajeros que pretenden viajar. Este método determinará
    si el automóvil puede o no avanzar con base en los valores de regreso
    de los métodos calculaConsumo y requiereManteniemiento: para que el
    automóvil avance, debe haber suficiente gasolina (valor de regreso de
    calculaConsumo, debe ser mayor o igual a cero) y no requerir mantenimiento
    (valor de regreso de requiereMantenimiento, debe ser falso).
    Si el avance del automóvil es posible, el método desplegará el mensaje
    “Avance confirmado”, actualizará el valor de kilometraje sumándole
    la distancia recorrida y restará la gasolina consumida a gasolinaEnTanque.
    De lo contrario, no modificará ningún atributo y desplegará alguno o los
    dos mensajes según la condición presentada: “No hay suficiente gasolina”
    y/o “Mantenimiento requerido”.
    */
}
void Automovil::calculaConsumo(float distancia, int pasajeros){

    /*
    recibe la distancia a recorrer y los pasajeros que viajan en el automóvil.
    El método calcula la cantidad de gasolina que se requerirían para lograr
    el avance deseado. Tip. Usa el rendimiento del automóvil (cantidad promedio
    de kilómetros que recorre un automóvil por cada litro de gasolina).
    Si el automóvil va lleno (viajan todos los pasajeros que caben según numPasajeros),
    agrega 5% extra de consumo de gasolina a lo calculado por el rendimiento;
    si viajan menos de la mitad de los pasajeros de su capacidad, resta 4% al
    consumo calculado.
    El método regresará la cantidad de litros requeridos para que el
    utomóvil avance. Regresará -1 si el automóvil no tiene suficiente
    gasolina para avanzar.
    */
    
    if(numPuertas=pasajeros){
        
    }
   

}
void Automovil::llenaTanque(){
    /*
    muestra la cantidad de litros de gasolina que requiere
    el tanque del automóvil para estar lleno. Asigna el
    valor a gasolinaEnTanque de capacidadTanque.
    Al final, despliega el letrero “Tanque lleno”.
    */
    int cantidad = capacidadTanque - gasolinaEnTanque;
    gasolinaEnTanque += cantidad;
    cout<<"Cantidad de gasolina que requiere el automóvil para estar lleno "<<cantidad<<" litros."<<endl;
    cout<<"Tanque lleno"<<endl;
}
//-----------------IMPRIME TODA LA INFORMACIÓN DEL AUTOMÓVIL-------------------------------
void Automovil::imprimeAutomovil(){
    cout<<"--Datos del Automóvil--"<<endl;
    cout<<"Marca: "<<marca<<endl;
    cout<<"Modelo: "<<modelo<<endl;
    cout<<"Anio: "<<anio<<endl;
    cout<<"Kilometraje: "<<kilometraje<<endl;
    cout<<"Número de Puertas: "<<numPuertas<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Rendimiento: "<<rendimientos<<endl;
    cout<<"Capacidad en Tanque: "<<capacidadTanque<<endl;
    cout<<"Gasolina en Tanque: "<<gasolinaEnTanque<<endl;
}
bool Automovil::requiereMantenimiento(){
    /*
    debe comprobar si el kilometraje del automóvil ha
    llegado a 10000 kilómetros recorridos; en caso de
    que ocurra, desplegará el letrero “Mantenimiento
    requerido”. El método regresa un valor booleano
    que informa si el mantenimiento es requerido (true) o no (false).
    */
    if (kilometraje >= 10000){
        cout<<"Mantenimiento requerido"<<endl;
        return true;
    }else{
        return false;
    }
}
void Automovil::validaGasolinaEnTanque(){
    /*
    valida que al introducir el usuario los datos del automóvil,
    no dé en gasolinaEnTanque un valor mayor que capacidadEnTanque.
    Si ocurre un error, muestra un mensaje y se repite la lectura
    mientras no se introduzca un valor válido. La función regresa
    un valor correcto del valor de gasolinaEnTanque.
    */
    while (gasolinaEnTanque > capacidadTanque){
        cout<<"Gasolina en tanque es mayor a la capacidad en tanque"<<endl;
        cout<<"Vuelve a ingresar la gasolina en tanque: ";
        cin>>gasolinaEnTanque;
    }
}
//-----------------------------------------------------------------------------------------------

//-----------------------------------DESTRUCTOR----------------------------------------------------
Automovil::~Automovil(){
}
