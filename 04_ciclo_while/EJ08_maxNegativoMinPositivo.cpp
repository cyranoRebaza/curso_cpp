
/*
    EJERCICIO 08:
    Hacer un programa que solicite una lista de números que corta cuando se
    ingresa un cero y luego emitir por pantalla el máximo de los números
    negativos y el mínimo de los números positivos.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;

    int minimoPositivo;
    int maximoNegativo;

    bool banderaMinimoPositivo = false;
    bool banderaMaximoNegativo = false;


    //estructura para cargar los numeros

    //pido numero
    cout << "Ingrese numero: ";
    cin >> numero;

    while(numero !=0){

        //busco numero positivos y los negativos
        if(numero >0){
            //trabajo con los positivos
            if(banderaMinimoPositivo == false){
                minimoPositivo = numero;
                banderaMinimoPositivo = true;
            }
            else{
                if(numero < minimoPositivo){
                    minimoPositivo = numero;
                }
            }

        }
        else{
            //trabajo con los negativos
            if(banderaMaximoNegativo == false){
                maximoNegativo = numero;
                banderaMaximoNegativo = true;
            }
            else{
                if(numero > maximoNegativo){
                    maximoNegativo = numero;
                }
            }
        }

        //pido numero
        cout << "Ingrese numero: ";
        cin >> numero;
    }

    // muestro el minimo positivo y el maximo negativo
    cout << "El minimo positivo: " << minimoPositivo << endl;
    cout << "El maximo negativo: " << maximoNegativo << endl;

    system("pause");
    return 0;
}
