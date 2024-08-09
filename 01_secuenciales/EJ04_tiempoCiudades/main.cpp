
/*
    EJERCICIO 04:
    Hacer un programa que permita ingresar los kilómetros existentes entre dos
    ciudades y la velocidad promedio de un vehículo. Calcular y emitir por pantalla
    el tiempo aproximado que demandará llegar de un punto a otro teniendo en
    cuenta los datos ingresados.

*/

#include <iostream>

using namespace std;

int main()
{
    // DECLARACION DE VARIABLES
    int velocidad;
    float kilometros;
    float tiempo;

    // SOLICITO INGRESE KILOMETROS Y VELOCIDAD
    cout << "Ingrese la distancia entre las ciudades (km): ";
    cin >> kilometros;

    cout << "Ingrese la velocidad del vehiculo (km/h): ";
    cin >> velocidad;

    // CALCULO EL TIEMPO
    tiempo = kilometros / velocidad;

    // MUESTRO EL TIEMPO
    cout << "El tiempo aproximado es (h):" << tiempo << endl;

    return 0;
}
