
/*
    EJERCICIO 08:
    Hacer un programa para ingresar cuatro números distintos y luego mostrar por pantalla el menor de ellos.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    float numero1;
    float numero2;
    float numero3;
    float numero4;

    float menor;

    // pido los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    cout << "Ingrese numero: ";
    cin >> numero3;

    cout << "Ingrese numero: ";
    cin >> numero4;

    //comparo
    if(numero1 < numero2){
        menor = numero1;
    }
    else{
        menor = numero2;
    }

    if(numero3 < menor){
        menor = numero3;
    }

    if(numero4 < menor){
        menor = numero4;
    }

    // muestro
    cout << "menor es: " << menor << endl;

    system("pause");
    return 0;
}
