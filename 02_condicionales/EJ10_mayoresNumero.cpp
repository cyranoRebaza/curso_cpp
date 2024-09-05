
/*
    EJERCICIO 10:
    Hacer un programa para ingresar cuatro números y luego mostrar por pantalla cuáles son mayores a 100.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    float numero1;
    float numero2;
    float numero3;
    float numero4;

    // pido los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    cout << "Ingrese numero: ";
    cin >> numero3;

    cout << "Ingrese numero: ";
    cin >> numero4;

    cout << endl << "Los numero mayores a 100 son:" << endl;

    // comparo
    if(numero1 > 100){
        cout << numero1 << endl;
    }

    if(numero2 > 100){
        cout << numero2 << endl;
    }

    if(numero3 > 100){
        cout << numero3 << endl;
    }

    if(numero4 > 100){
        cout << numero4 << endl;
    }




    system("pause");
    return 0;
}
