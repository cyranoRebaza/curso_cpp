
/*
    EJERCICIO 03:
    Hacer un programa que solicite dos números y luego muestre los números
    entre el menor y el mayor de ellos. Acordate, usando While.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero1;
    int numero2;

    int numeroMayor;
    int numeroMenor;

    // pido los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    // comparo los numero
    if(numero1 > numero2){
        numeroMayor = numero1;
        numeroMenor = numero2;
    }
    else{
        numeroMayor = numero2;
        numeroMenor = numero1;
    }

    //muestro numero forma ascendente
    while(numeroMenor < numeroMayor-1 ){
        numeroMenor++;
        cout << numeroMenor << endl;

    }

    system("pause");
    return 0;
}
