
/*
    EJERCICIO O2:
    Hacer un programa para ingresar dos números distintos y luego se muestre por pantalla el menor de
    ellos.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero1;
    int numero2;

    // pido los numeros
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // pregunto
    if(numero1 < numero2){
        cout << endl << "numero menor: " << numero1 << endl;
    }
    else{
        cout << endl << "numero menor: " << numero2 << endl;
    }

    system("pause");
    return 0;
}
