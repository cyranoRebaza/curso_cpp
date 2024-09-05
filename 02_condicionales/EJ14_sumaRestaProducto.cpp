
/*
    EJERCICIO 14:
    Hacer un programa que solicite el ingreso de dos números y luego calcular:

    a. La resta, si el primero es mayor que el segundo.
    b. La suma, si son iguales.
    c. El producto, si el primero es menor.

    Se deberá emitir un cartel por pantalla con el resultado correspondiente.

*/

#include <iostream>

using namespace std;

int main(){

    // declaracion variables
    int numero1;
    int numero2;

    int resultado;

    // pido los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    // pregunto
    if(numero1 > numero2){
        cout << "resta:" << endl;
        resultado = numero1 - numero2;
    }
    else{
        if(numero1 == numero2){
            cout << "suma:" << endl;
            resultado = numero1 + numero2;
        }
        else{
            cout << "producto: " << endl;
            resultado = numero1 * numero2;
        }
    }

    // muestro
    cout << endl << "El resultado es: " << resultado << endl;

    system("pause");
    return 0;
}
