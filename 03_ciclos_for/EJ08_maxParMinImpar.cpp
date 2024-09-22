
/*
    EJERCICIO 08:
    Hacer un programa que solicite 20 números y luego emitir por pantalla el
    máximo de los números pares y el mínimo de los números impares.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int maximoPar = 0;
    int minimoImpar = 0;

    bool banderaPar = false;
    bool banderaImpar = false;

    // cargo los 20 numeros
    for(int i = 0; i < 5; i++){

        // pido el numero
        cout << "Ingrese un numero: ";
        cin >> numero;

        // calculo la divisibilidad del numero
        if(numero % 2 == 0){
            //guardo el primer par de la lista como maximo par
            if(banderaPar == false){
                maximoPar = numero;
                banderaPar = true;
            }
            else{
                // comaparar los los siguiente numeros pares con el maximo gurdado
                if(numero > maximoPar){
                    maximoPar = numero;
                }

            }
        }
        else{
            //guardo el primer Impar de la lista como minimo impar
            if(banderaImpar == false){
                minimoImpar = numero;
                banderaImpar = true;
            }
            else{
                // comaparar los los siguiente numeros impares con el minimo guardado
                if(numero < minimoImpar){
                    minimoImpar = numero;
                }

            }
        }
    }

    // muestro maximo par y el minimo impar
    cout << "El maximo par: " << maximoPar << endl;
    cout << "El minimo impar: " << minimoImpar << endl;

    system("pause");
    return 0;
}
