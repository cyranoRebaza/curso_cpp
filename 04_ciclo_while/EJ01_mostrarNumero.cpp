
/*
    EJERCICIO 01:
    - A) Hacer un programa para mostrar los números del 1 al 10. No se debe realizar
    ningún pedido de datos. USANDO WHILE.

    - B) Hacer un programa para mostrar los números del 10 al 1. No se debe realizar
    ningún pedido de datos. USANDO WHILE.

*/

#include <iostream>

using namespace std;

int main(){

    //SOLUCION A:
    // declaro las variables
    int numero;

    numero = 1;  // inicializo

    while(numero <=10){
        cout << numero << endl,  // muestro numero

        numero++; // incremento de uno en uno
    }

    cout << endl << "*******10 al 1*********" << endl << endl;

    //SOLUCION B:
    numero = 10;  // inicializo

    while(numero >=1){
        cout << numero << endl,  // muestro numero

        numero--; // decremento de uno en uno
    }


    system("pause");
    return 0;
}
