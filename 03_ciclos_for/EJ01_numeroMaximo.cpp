
/*
    EJERCICIO 01:
    Hacer un programa que solicite el ingreso de 10 números y que muestre el
    mayor de ellos por pantalla. Solo se debe emitir UN valor por pantalla.

    **********************************
    - METODO1: es  para numero positivos
    - METODO2: tomo al primer numero como maximo/mayor


*/

#include <iostream>

using namespace std;

int main(){

    /*

    //METODO 1:
    // declarar las variables
    int numero;
    int numeroMayor = 0;

    // pedimos los 10 numeros
    for(int i = 0; i <10; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;

        //busco el maximo
        if(numero > numeroMayor){
            numeroMayor = numero;
        }
    }

    // muestro el numero mayor
    cout << "El numero mayor es: " << numeroMayor << endl;

    */

    //METODO 2:
    // declarar las variables
    int numero;
    int numeroMayor;

    // pido los 10 numeros
    for(int i=0; i<10; i++){

        cout << "Ingrese un numero: ";
        cin >> numero;

        //pregunto por la primera vuelta
        if(i==0){
            numeroMayor = numero;
        }
        else{
            if(numero > numeroMayor){
                numeroMayor = numero;
            }
        }
    }

    // muestro el numero mayor
    cout << "El numero mayor es: " << numeroMayor << endl;



    system("pause");
    return 0;
}
