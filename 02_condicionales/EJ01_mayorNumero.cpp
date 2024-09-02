
/*
    EJERCICIO 01:
    Hacer un programa para ingresar un número y luego se emita por pantalla un cartel aclaratorio si “Es mayor a 10”
    o “No es mayor a 10”.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;

    // solicito ingreso del numero
    cout << "Ingrese el numero: ";
    cin >> numero;

    // pregunto
    if(numero > 10){
        cout << "Es mayor a 10" << endl;
    }
    else{
        cout << "No es mayor a 10" << endl;
    }

    system("pause");
    return 0;
}
