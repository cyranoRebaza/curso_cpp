
/*
    EJERCICIO 07:
    Hacer un programa que solicite una lista de números que corta cuando se
    ingresa un cero y luego mostrar por pantalla el menor y el segundo menor.

    NOTA: ademas mostrar la posicion de ambos numeros

*/

#include <iostream>

using namespace std;

int main(){

    // declaracion de variables
    int numero;
    int primerMenor;
    int segundoMenor;

    int posicion = 1;
    int primerPosicion;
    int segundaPosicion;

    bool banderaPrimerMenor = false;
    bool banderaPrimerPosicion = false;

    // estructura principal cargar numeros
    cout << "Ingrese numero: ";
    cin >> numero;


    while(numero != 0){

        // pregunto si hay un primer negativo
        if(banderaPrimerMenor == false){
            primerMenor = numero;
            banderaPrimerMenor = true;
            primerPosicion = posicion;
            banderaPrimerPosicion = true;
        }
        else{
            //actualizo primer menor
            if(numero < primerMenor){
                segundoMenor = primerMenor;
                primerMenor = numero;

                segundaPosicion = primerPosicion;
                primerPosicion = posicion;
            }
            else{
                if(numero < segundoMenor){
                    segundoMenor = numero;
                    segundaPosicion = posicion;
                }
            }
        }

        posicion++;
        cout << "Ingrese numero: ";
        cin >> numero;
    }

    // muestro el primer y segundo menor
    cout << "Primer menor: " << primerMenor << " ,ingresado en la posicion" << primerPosicion << endl;
    cout << "Segundo menor: " << segundoMenor << " ,ingresado en la posicion" << segundaPosicion << endl;

    system("pause");
    return 0;
}
