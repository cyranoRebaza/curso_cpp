
/*
    EJERCICIO 05:
    Hacer un programa para ingresar un número y mostrar por pantalla un cartel aclaratorio si el mismo es PAR o
    IMPAR.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int resto;

    // pido el numero
    cout << "Ingrese el numero: ";
    cin >> numero;

    // calculo el resto de dividir numero por 2
    resto = numero % 2;

    //pregunto: si el resto es cero
    if(resto == 0){
        cout << "ES PAR" << endl;
    }
    else{
        cout << "ES IMPAR" << endl;
    }

    system("pause");
    return 0;
}
