
/*
    EJERCICIO 22:
    Hacer un programa que solicite cuatro números. Emitir un cartel aclaratorio si son todos iguales entre sí, caso
    contrario, no emitir nada.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero1;
    int numero2;
    int numero3;
    int numero4;

    // pido los numeros
    cout << "Ingrese numero 1: ";
    cin >> numero1;

    cout << "Ingrese numero 2: ";
    cin >> numero2;

    cout << "Ingrese numero 3: ";
    cin >> numero3;

    cout << "Ingrese numero 4: ";
    cin >> numero4;

    // comparo todos los numeros si son iguales y muestro
    if(numero1 == numero2 && numero2 == numero3 && numero3 == numero4){
        cout << "son iguales" << endl;
    }


    system("pause");
    return 0;
}
