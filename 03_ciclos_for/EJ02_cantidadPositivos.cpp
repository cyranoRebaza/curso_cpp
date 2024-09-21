
/*
    EJERCICIO 02:
    Hacer un programa que solicite 20 números y calcule y emita por pantalla
    cuántos son positivos (mayores a cero). Se debe mostrar un solo valor: el
    conteo final.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int cantidadPositivos = 0;

    //pido los 20 numeros
    for(int i = 0; i<20; i++){

        //pido numero
        cout << "Ingrese numero: ";
        cin >> numero;

        // pregunto numero mayor a cero --> cuento
        if(numero > 0){
            cantidadPositivos++;
        }
    }

    // muestro cuantos son positivos
    cout << "Los numero positivos son: " << cantidadPositivos << endl;


    system("pause");
    return 0;
}
