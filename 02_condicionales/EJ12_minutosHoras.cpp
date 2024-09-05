
/*
    EJERCICIO 12:
    Hacer un programa para ingresar un valor que estará expresado en minutos. Si los minutos superan los 60, pasar
    el valor a horas, de lo contrario dejarlo en minutos. Mostrar el resultado en pantalla aclarando si se muestran minutos
    u horas

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int minutosTotales;
    int horas;
    int minutos;

    //pido los datos
    cout << "Ingres los minutos totales: ";
    cin >> minutosTotales;

    if(minutosTotales > 60){
        horas = minutosTotales / 60;
        cout << "horas: " << horas << endl;
    }
    else{
        minutos = minutosTotales;
        cout << "minutos: " << minutos << endl;
    }

    system("pause");
    return 0;
}
