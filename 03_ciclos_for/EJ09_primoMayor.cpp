
/*
    EJERCICIO 09:
    Hacer un programa para ingresar 10 números y luego calcule y emita el mayor
    de los primos de la lista. En caso de no haber ningún número primo, deberá
    aclararlo con un cartel.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int mayorPrimo;
    int cantidadDivisores;
    int banderaPrimo = false;

    // cargo los numeros
    for(int i = 0; i < 10; i++){
        //pido numero numero
        cout << "Ingrese numero: ";
        cin >> numero;

        cantidadDivisores = 0;

        // calculo si es primo y lo guardo
        for(int i = 1; i <= numero; i++){
            //calculo divisores
            if(numero % i == 0){
                cantidadDivisores++;
            }
        }
        //pregunto por la cantidad de divisores
        if(cantidadDivisores == 2){
            // guardo el primer primo que ingrese como mayor primo
            if(banderaPrimo == false){
                mayorPrimo = numero;
                banderaPrimo = true;
            }
            else{
                // comparo los siguientes numeros primos con el guardado
                if(numero > mayorPrimo){
                    mayorPrimo = numero;
                }
            }
        }

    }

    //muestro el mayor de los numero primos
    if(banderaPrimo == true){
        cout << "El mayor de los numeros primos es: " << mayorPrimo << endl;
    }
    else{
        cout << "No hay ningun primo en la lista ingresada..." << endl;
    }

    system("pause");
    return 0;
}
