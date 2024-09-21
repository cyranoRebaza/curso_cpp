
/*
    EJERCICIO 24:
    Hacer un programa para ingresar tres números, emitir un cartel aclaratorio si la suma de los dos primeros es mayor al
    producto del segundo con el tercero.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero1;
    int numero2;
    int numero3;

    int suma;
    int producto;

    // pido los nuemros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    cout << "Ingrese numero: ";
    cin >> numero3;

    //suma
    suma = numero1 + numero2;

    // producto
    producto = numero2 * numero3;

    // comparo suma y producto
    if(suma > producto){
        cout << "Es mayor la suma..." << endl;
    }

    system("pause");
    return 0;
}
