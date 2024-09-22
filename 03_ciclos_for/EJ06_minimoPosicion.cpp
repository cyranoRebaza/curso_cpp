
/*
    EJERCICIO 06:
    Hacer un programa que solicite 20 números y luego mostrar por pantalla el
    menor de ellos y la posición en la que fue encontrado.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int numeroMinimo;
    int posicionMinimo;

    // pido 20 numeros
    for(int i = 1; i <= 20; i++){

        // pido numero
        cout << "Ingrese numero: ";
        cin >> numero;

        //tomo al primer numero como minimo
        if(i == 1){
            numeroMinimo =  numero;
            posicionMinimo = i;
        }
        else{
            if(numero < numeroMinimo){
                numeroMinimo = numero;
                posicionMinimo = i;
            }
        }
    }

    // muestro numero minimo y posicion
    cout << "Numero menor es: " << numeroMinimo << endl;
    cout << "Ingresado en la posicion: " << posicionMinimo << endl;

    system("pause");
    return 0;
}
