
/*
    EJERCICIO 03:
    - A) Hacer un programa para mostrar los números del 1 al 10. No se debe realizar
      ningún pedido de datos.

    - B) Hacer un programa para mostrar los números del 10 al 1. No se debe realizar
      ningún pedido de datos.

    - C) Hacer un programa que muestre los números del 1 al 100 de 5 en 5. Ejemplo:
      0, 5, 10, 15, 20.... 100.

*/

#include <iostream>

using namespace std;

int main(){

    cout << "******** 1 al 10 ******" << endl;
    // SOLUCION A:
    for(int i = 1; i<=10; i++){
        cout << i << endl;
    }

    cout << "******** 10 al 1 ******" << endl;

    // SOLUCION B:
    for(int i = 10; i>=1; i--){
        cout << i << endl;
    }


    cout << "******* 5 en 5 *******" << endl;

    // SOLUCION C:
    for(int i = 0; i<=100; i+=5){
        cout << i << endl;
    }

    system("pause");
    return 0;
}
