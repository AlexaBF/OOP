#ifndef PROFESOR_H
#define PROFESOR_H
#include <string>
#include "Persona.h"
using namespace std;

class Profesor: public Persona
{
    public:
        Profesor();
        Profesor(string, string, int, string, int );
        virtual ~Profesor();
        string getNomina();
        int getdepartamentoAcademico();
        void setNomina(string);
        void setDepartamentoAcademico(int);
        void imprimeDatos();

    private:
        string nomina;
        int departamentoAcademico;
};

#endif // PROFESOR_H
