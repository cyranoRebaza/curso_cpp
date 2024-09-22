
/*
    EJERCICIO 05:
    Hacer un programa que solicite 10 números y luego mostrar por pantalla el
    máximo de ellos y la posición en la que fue ingresado.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int numeroMaximo;
    int posicionMaximo;

    // pido 10 numeros
    for(int i = 1; i <= 10; i++){

        //pido numero
        cout << "Ingrese numero: ";
        cin >> numero;

        //pregunto
        if(i == 1){
            numeroMaximo = numero;
            posicionMaximo = i;
        }
        else{
            if(numero > numeroMaximo){
                numeroMaximo = numero;
                posicionMaximo = i;
            }
        }
    }

    // muestro maximo y posicion
    cout << "El numero maximo es: " << numeroMaximo << endl;
    cout << "Ingresado en la posicion: " << posicionMaximo << endl;


    system("pause");
    return 0;
}
