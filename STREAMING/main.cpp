//  Created on 11/06/20.

#include <iostream>
#include <iostream>
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"
int main() {
    int opcion;
    cout<<"\n------Digite la opción deseada--------"<<endl;
    cout<<"\n- 1  -----    ver videos      --------"<<endl;
    cout<<"\n- 2  ---     ver Peliculas    --------"<<endl;
    cout<<"\n- 3  ---      ver Series      --------"<<endl;
    cout<<"\nopción->";
    cin>>opcion;
    while (opcion!=1 & opcion!=2 & opcion!=3) {
        cout<<"opcion fuera del rango de 1-3,intente de nuevo"<<endl;
        cout<<"\nopción->";
        cin>>opcion;

    }
    if (opcion==1) {
        Video vid(1,6,"Dark","Suspenso",26);
        vid.leerArchivo();
    }
    else if (opcion==2){
        Pelicula peli(1,6,"Dark","Suspenso",26,4.3);
        peli.leerArchivoP();
    }else{
        Serie ser(1,6,"Dark","Suspenso",26,1,1,"Tiempo",4.75);
        ser.leerArchivoS();
    }

    return 0;
}
