
/*
    EJERCICIO 04:
    Hacer un programa que muestre los números del 1 al 100 de 5 en 5. Ejemplo:
    0, 5, 10, 15, 20.... 100. Usando While.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;

    numero = 0;

    while(numero <= 100){

        // numero multiplo cinco
        if(numero % 5 == 0){

        }
        cout << numero << endl;
        numero+=5;
    }

    system("pause");
    return 0;
}
