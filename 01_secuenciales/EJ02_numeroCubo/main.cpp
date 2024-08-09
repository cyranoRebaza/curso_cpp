/*
    Ejercicio 02: Hacer un programa para solicitar por teclado un número y luego devolver su valor elevado al cubo.

*/

#include <iostream>

using namespace std;

int main()
{
    // declaro la variable
    int numero;
    int cubo;

    // solicito el numero
    cout << "Ingrese un numero: ";
    cin >> numero;

    //calculo el numero elevado al cubo
    cubo = numero * numero * numero;

    // muestro en pantalla
    cout << "el numero " << numero << " elevado al cubo es: " << cubo << endl;



    return 0;
}
