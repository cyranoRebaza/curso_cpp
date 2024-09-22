
/*
    EJERCICIO 05:
    Hacer un programa que solicite UN número y luego calcule y emita un cartel
    aclaratorio si el mismo es primo o no es primo.

    Nota: usando While. Ya lo hicimos con FOR, ahora con While.

*/

#include <iostream>

using namespace std;

int main(){

    //METODO1: BUSCANDO LOS QUE SON DIVISORES
    // declaro las variables
    int numero;
    int divisor;
    int contadorDivisores;

    // pido numero
    cout << "Ingrese numero: ";
    cin >> numero;


    divisor = 1; // inicializo divisor
    contadorDivisores = 0;

    while(divisor <= numero){

        if(numero%divisor == 0){
            contadorDivisores++;
        }

        divisor++; //incremento divisor
    }

    // pregunto por la cantidad de divisores
    if(contadorDivisores == 2){
        cout << "Es primo" << endl;
    }
    else{
        cout << "No es primo " << endl;
    }

    /*

    //METODO2: BUSCANDO LOS QUE NO SON DIVISORES
    // declaro las variables
    int numero;
    int divisor;

    // pido numero
    cout << "Ingrese numero: ";
    cin >> numero;

    divisor = 2; // inicializo divisor en 2 --> partimo suponiendo que ya existen dos divisores

   // busco los que no son divisores --> empezando divisor = 2 y descartando numero = 1
   while(numero%divisor != 0 numero > 1){
        divisor++; //incremento divisor
    }

    // pregunto por el numero es igual al divisor
    if(numero == divisor){
        cout << "Es primo" << endl;
    }
    else{
        cout << "No es primo " << endl;
    }

    */
    system("pause");
    return 0;
}
