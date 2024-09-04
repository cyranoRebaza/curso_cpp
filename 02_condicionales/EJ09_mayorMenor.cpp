
/*
    EJERCICIO 09:
    Hacer un programa para ingresar cinco números distintos y luego mostrar por pantalla el mayor y el menor de ellos.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    float numero1;
    float numero2;
    float numero3;
    float numero4;
    float numero5;

    float mayor;
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

    cout << "Ingrese numero: ";
    cin >> numero5;

    // comparo de a dos variables
    if(numero1 > numero2){
        mayor = numero1;
        menor = numero2;
    }
    else{
        mayor = numero2;
        menor = numero1;
    }

    if(numero3 > mayor){
        mayor = numero3;
    }
    else{
        if(numero3 < menor){
            menor = numero3;
        }
    }

    if(numero4 > mayor){
        mayor = numero4;
    }
    else{
        if(numero4 < menor){
            menor = numero4;
        }
    }

    if (numero5 > mayor){
        mayor = numero5;
    }
    else{
        if(numero5 < menor){
            menor = numero5;
        }
    }

    // muestro el mayor y menor
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    system("pause");
    return 0;
}
