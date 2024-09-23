
/*
    EJERCICIO 09:
    Hacer un programa para ingresar una lista de números que corta cuando se
    ingresa un cero y luego mostrar:

    A) la cantidad de números primos,
    B) la cantidad de números pares,
    C) la cantidad de positivos
    D) la cantidad de negativos.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;

    // VARIABLES A)
    int cantidadPrimos = 0;
    int cantidadDivisores;

    // VARIABLES B)
    int cantidadPares = 0;

    // VARIABLES C)
    int cantidadPositivos = 0;


    // VARIABLES D)
    int cantidadNegativos = 0;

    // pido numero
    cout << "Ingrese numero: ";
    cin >> numero;


    // estructura para ingresar lista de numeros --> while pido el numero antes de entrar y antes de salir
    while(numero != 0){

        //A)BUSCO NUMERO PRIMO
        cantidadDivisores = 0;
        for(int i = 1; i <= numero; i++){
            //busco divisores exactos
            if(numero% i== 0){
                cantidadDivisores++;
             }

        }

        //pregunto por la cantidad de divisores
        if(cantidadDivisores == 2){
            cantidadPrimos++;
            }


        // B)PREGUNTO SI EL NUMERO ES PAR
        if(numero % 2 == 0){
            cantidadPares++;
        }

        // C)PREGUNTO SI EL NUMERO ES POSITIVO
        if(numero > 0){
            cantidadPositivos++;
        }

        // D)PREGUNTO SI EL NUMERO ES NEGATIVO
        if(numero < 0){
            cantidadNegativos++;
        }


        cout << "Ingrese numero: ";
        cin >> numero;
    }



    // A)MUESTRO CANTIDAD PRIMOS
    cout << "cantidad PRIMOS: " << cantidadPrimos << endl;

    // B)MUESTRO LA CANTIDAD DE PARES
    cout << "cantidad PARES: " << cantidadPares << endl;

    // C)MUESTRO LA CANTIDAD DE POSITIVOS
    cout << "cantidad POSITIVOS: " << cantidadPositivos << endl;

    // D)MUESTRO LA CANTIDAD DE NEGATIVOS
    cout << "cantidad NEGATIVOS: " << cantidadNegativos << endl;



    system("pause");
    return 0;
}
