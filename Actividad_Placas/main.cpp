/*
Descripción: Leer un archivo texto conteniendo matrículas
de aeronaves,  e indique cuáles son las 3
placas con los que se tiene mayor contacto.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> leerArchivo(string nomArchivo){
    vector<string> vec;
    //string donde se va leyendo cada linea del archivo
    string linea;
    //se abre el archivo
    ifstream archivo(nomArchivo);
    if (archivo.is_open()){
        while ( getline (archivo,linea) ){//lee cada linea del archivo
            vec.push_back(linea);
        }
        archivo.close();//cierra el archivo
    }else{
        cout<<"No se puede abrir el archivo"<<endl;
    }
    return vec;
}

int main(){
    vector<string> aeronaves;
    vector<string> sinRepetir;
    
    aeronaves = leerArchivo("placas.txt");

    //obtener solo los caractesinRepetir de placas
    for (int i = 0; i < aeronaves.size(); i++){
        //si es digito se obtiene solo el primer char
        if(isdigit(aeronaves[i][1])){
           aeronaves[i]=aeronaves[i].substr(0,1);
        }else{//si no es digito se obtinen los dos char
            aeronaves[i]=aeronaves[i].substr(0,2);
        }
        //agregar a arreglo de comparación
        sinRepetir.push_back(aeronaves[i]);
    }
    
    //se borran duplicados
    sort(sinRepetir.begin(), sinRepetir.end());
    sinRepetir.erase(unique(sinRepetir.begin(), sinRepetir.end()), sinRepetir.end());

    //contar cuantas veces aparece cada elemento
    for (int i = 0; i < sinRepetir.size(); i++){
        sinRepetir[i]=to_string(count(aeronaves.begin(), aeronaves.end(), sinRepetir[i])) + " " + sinRepetir[i];
    }
    //ordenar arreglo
    sort(sinRepetir.begin(), sinRepetir.end());
    //mostrar las tres placas que aparecen más seguido
    for (int i = sinRepetir.size()-1; i >= sinRepetir.size()-3; i--){
        cout<<sinRepetir[i]<<endl;
    }
    return 0;
}