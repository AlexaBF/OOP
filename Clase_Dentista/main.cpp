/*
Nombre: Alexa Basurto FlosinRepetir
Matrícula: A01422793
Fecha de creación: 16/01/2023
Descripción: Ejercicio agendado de citas para dentista
*/
#include <iostream>
#include <string>
using namespace std;

//-------------------------------------------------------Tratamiento------------------------------------------------
class Tratamiento{
private:
    string notas;
public:
    Tratamiento();

    void setNotas(string _notas);
    string getNotas();

    ~Tratamiento();
};

Tratamiento::Tratamiento(){
    notas="";
}

void Tratamiento::setNotas(string _notas){
    notas=_notas;
}
string Tratamiento::getNotas(){
    return notas;
}

Tratamiento::~Tratamiento(){
}

//-------------------------------------------------------Paciente------------------------------------------------
class Paciente{
private:
    string nombre;
    string telefono;
public:
    Paciente();
    Tratamiento tratamiento;
    void setNombre(string _nombre);
    void setTelefono(string _telefono);
    string getNombre();
    string getTelefono();

    ~Paciente();
};

Paciente::Paciente(){
    nombre="";
    telefono="";
}

void Paciente::setNombre(string _nombre){
    nombre = _nombre;
}

void Paciente::setTelefono(string _telefono){
    telefono = _telefono;
}

string Paciente::getNombre(){
    return nombre;
}

string Paciente::getTelefono(){
    return telefono;
}

Paciente::~Paciente(){
}

//-------------------------------------------------------Cita------------------------------------------------
class Cita{
private:
    Paciente paciente;
    string fecha;
    string hora;
public:
    Cita();

    void setFecha(string _fecha);
    void setHora(string _hora);
    string getFecha();
    string getHora();

    ~Cita();
};

Cita::Cita(){
    fecha="";
    hora="";

}

void Cita::setFecha(string _fecha){
    fecha = _fecha;
}
void Cita::setHora(string _hora){
    hora = _hora;
}
string Cita::getFecha(){
    return fecha;
}
string Cita::getHora(){
    return hora;
}

Cita::~Cita(){
}

//-------------------------------------------------------Agenda------------------------------------------------
class Agenda{
private:
    Cita cita;
    Paciente paciente;
    
    //Tratamiento tratamiento;
public:
    Agenda();

    void agregarCita(string _fecha,string _hora, string _nombre,string _telefono,string _notas);
    void cambiaCita();
    void cancelarCita();

    void mostrarCita();

    ~Agenda();
};

Agenda::Agenda(){
}

void Agenda::agregarCita(string _fecha, string _hora,string _nombre, string _telefono,string _notas){
    cita.setFecha(_fecha);
    cita.setHora(_hora);
    paciente.setNombre(_nombre);
    paciente.setTelefono(_telefono);
    paciente.tratamiento.setNotas(_notas);

}

void Agenda::mostrarCita(){
    cout<<"--------------------------------------------"<<endl;
    cout<<"Fecha: "<<cita.getFecha()<<endl;
    cout<<"Hora: "<<cita.getHora()<<endl;
    cout<<"Nombre: "<<paciente.getNombre()<<endl;
    cout<<"Telefono: "<<paciente.getTelefono()<<endl;
    cout<<"Tratamiento: "<<paciente.tratamiento.getNotas()<<endl;
    cout<<"--------------------------------------------"<<endl;
}

void Agenda::cambiaCita(){

}

void Agenda::cancelarCita(){

}

Agenda::~Agenda(){
}

//-------------------------------------------------------------------------------------------------------

int main(){
    string fecha="24/01/2023",nota="Dolor de muelas de lado derecho",
    nombre="Raquel Medina",telefono = "7775326789",hora="4:30p.m.";
    Agenda agenda;
    Agenda agenda2;
    agenda.agregarCita(fecha, hora, nombre, telefono, nota);

    fecha="24/01/2023",nota="Cambiado de ligas en brackets",
    nombre="Mauricio Hernandez",telefono = "77753183499",hora="11:30a.m.";
    
    agenda2.agregarCita(fecha, hora, nombre, telefono, nota);
    agenda.mostrarCita();
    agenda2.mostrarCita();
    return 0;
}