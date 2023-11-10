//  Created on 28/05/20.

#ifndef Envio_hpp
#define Envio_hpp
#include <stdio.h>
#include <string>
using namespace std;

class Envio
{
    public:
        // constructores
        Envio();
        Envio(string, string, string, string, string, string, string, string, string, string);
        //destructor
        virtual ~Envio();
        //setters y getters
        void setNombreR(string);
        void setDireccionR(string);
        void setCiudadR(string);
        void setEstadoR(string);
        void setCPR(string);
        void setNombreD(string);
        void setDireccionD(string);
        void setCiudadD(string);
        void setEstadoD(string);
        void setCPD(string);
        void setCosto(double);
        string getNombreR();
        string getDireccionR();
        string getCiudadR();
        string getEstadoR();
        string getCPR();
        string getNombreD();
        string getDireccionD();
        string getCiudadD();
        string getEstadoD();
        string getCOD();
        double getCosto();
        // otros metodos
        virtual double calculaCosto();

    private:
        string nombreR, direccionR, ciudadR, estadoR, cpR;
        string nombreD, direccionD, ciudadD, estadoD, cpD;
        double costo;
};


#endif /* Envio_hpp */
