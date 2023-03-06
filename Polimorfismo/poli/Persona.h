// Clase Persona
// sera la clase base para heredar y mostrar el funcionamiento del polimorfismo

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;

class Persona
{
    public:
        Persona(); //constructor por omision
        Persona(string, string, int);
        virtual ~Persona();

        string getNombre();
        string getTelefono();
        int getEdad();

        void setNombre(string);
        void setTelefono(string);
        void setEdad(int);

        virtual void imprimeDatos(); // este es la unico cambio de lo que hemos visto

    private:
        string nombre, telefono;
        int edad;
};

#endif // PERSONA_H
