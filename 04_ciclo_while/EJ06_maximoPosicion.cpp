
/*
    EJERCICIO 06:
    Hacer un programa que solicite una lista de n�meros que corta cuando se
    ingresa un cero y luego mostrar por pantalla el m�ximo de ellos y la posici�n
    en la que fue ingresado.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int numeroMaximo;
    bool banderaMaximo = false;

    // pido numero
    cout << "Ingrese numero: ";
    cin >> numero;


    //carga numeros --> cortar con cero
    while(numero != 0){

        //pregunto si hay un maximo --> bandera
        if(banderaMaximo == false){
            numeroMaximo = numero;
            banderaMaximo = true;
        }
        else{
            if(numero > numeroMaximo){
                numeroMaximo = numero;
            }
        }


        // pido nuevo numero
        cout << "Ingrese numero: ";
        cin >> numero;
    }

    // muestro el numero maximo
    cout << "El numero maximo es: " << numeroMaximo << endl;

    system("pause");
    return 0;
}
