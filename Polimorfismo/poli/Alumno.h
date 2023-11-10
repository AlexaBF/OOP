// Clase Alumno, hereda de Persona
// MLBC

#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>
#include <iostream>

#include "Persona.h"

using namespace std;

class Alumno: public Persona
{
    public:
        Alumno();
        virtual ~Alumno();
        string getMatricula();
        void setMatricula(string);
        void imprimeDatos();

    private:
        string matricula;
};

#endif // ALUMNO_H
