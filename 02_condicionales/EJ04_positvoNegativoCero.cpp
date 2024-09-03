
/*
    EJERCICIO 04:
    Hacer un programa para ingresar un número y luego se emita un cartel por pantalla “Positivo” si el número es
    mayor a cero, “Negativo” si el número es menor a cero o “Cero” si el número es igual a cero.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;

    // pido el numero
    cout << "Ingrese el numero: ";
    cin >> numero;

    // pregunto
    if(numero > 0){
        cout << "POSITIVO" << endl;
    }
    else{
        if(numero < 0){
            cout << "NEGATIVO" << endl;
        }
        else{
            cout << "CERO" << endl;
        }
    }


    system("pause");
    return 0;
}
