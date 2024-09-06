
/*
    EJERCICIO 19:
    Hacer un programa para ingresar 4 números. Luego analizar e informar por pantalla si los mismos se encuentran
    ordenados de forma decreciente

*/

#include <iostream>

using namespace std;

int main(){

    // declaracion variables
    int numero1;
    int numero2;
    int numero3;
    int numero4;

    // pido los numeros
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    cout << "Ingrese un numero: ";
    cin >> numero3;

    cout << "Ingrese un numero: ";
    cin >> numero4;

    // pregunto
    if((numero1 > numero2) && (numero2 > numero3) && (numero3 > numero4)){
        cout << "Ordenados" << endl;
    }
    else{
        cout << "Desordenados" << endl;
    }

    system("pause");
    return 0;
}
