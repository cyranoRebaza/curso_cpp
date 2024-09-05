
/*
    EJERCICIO 11:
    Hacer un programa para ingresar cuatro números y luego mostrar por pantalla cuántos son menores a 100

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    float numero1;
    float numero2;
    float numero3;
    float numero4;

    int contadorMenores = 0;

    //pido los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    cout << "Ingrese numero: ";
    cin >> numero3;

    cout << "Ingrese numero: ";
    cin >> numero4;

    // pregunto
    if(numero1 < 100){
        contadorMenores = contadorMenores + 1; // contadorMenores++
    }

    if(numero2 < 100){
        contadorMenores = contadorMenores + 1;
    }

    if(numero3 < 100){
        contadorMenores = contadorMenores + 1;
    }

    if(numero4 < 100){
        contadorMenores = contadorMenores + 1;
    }

    //muestro
    cout << endl << "Los menores son: " << contadorMenores << endl;

    system("pause");
    return 0;
}
