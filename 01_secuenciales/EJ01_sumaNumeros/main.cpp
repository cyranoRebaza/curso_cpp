/*
 Ejercicio 01: Hacer un programa que solicite por teclado un dos numeros y luego devuelva la suma

*/

#include <iostream>

using namespace std;

int main()
{
    //declaro las variables
    int n1;
    int n2;
    int resultado;

    // solicito los numeros por teclado
    cout << "Ingrese el primer numero:";
    cin >> n1;

    cout << "Ingrese el segundo numero:";
    cin >> n2;

    //calculo la suma
    resultado = n1 + n2;

    // muestro el resultado
    cout << "El resultado de la suma de " << n1 << " + " << n2 << " = " << resultado << endl;
    return 0;
}
