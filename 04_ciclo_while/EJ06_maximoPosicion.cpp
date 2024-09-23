
/*
    EJERCICIO 06:
    Hacer un programa que solicite una lista de números que corta cuando se
    ingresa un cero y luego mostrar por pantalla el máximo de ellos y la posición
    en la que fue ingresado.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int numeroMaximo;
    bool banderaMaximo = false;

    int posicion = 1;
    int posicionMaximo;
    bool banderaPosicion = false;

    // pido numero
    cout << "Ingrese numero: ";
    cin >> numero;

    posicionMaximo = posicion;

    //carga numeros --> cortar con cero
    while(numero != 0){

        //pregunto si hay un maximo --> bandera
        if(banderaMaximo == false){
            numeroMaximo = numero;
            banderaMaximo = true;
            posicionMaximo = posicion;
            banderaPosicion = true;
        }
        else{
            if(numero > numeroMaximo){
                numeroMaximo = numero;
                posicionMaximo = posicion;
            }
        }




        posicion++; // actualizo posicion
        // pido nuevo numero
        cout << "Ingrese numero: ";
        cin >> numero;
    }

    // muestro el numero maximo
    cout << "El numero maximo es: " << numeroMaximo << endl;
    cout << "La posicion es: " << posicionMaximo << endl;

    system("pause");
    return 0;
}
