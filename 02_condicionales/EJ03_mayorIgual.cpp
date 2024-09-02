
/*
    EJERCICIO O1:
    Hacer un programa para ingresar dos números y que luego emita por pantalla el mayor de ellos o un cartel
    aclaratorio “Son iguales” en el caso de que así sea.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero1;
    int numero2;

    // pido los numeros
    cout << "Ingrese primer numero: ";
    cin >> numero1;

    cout << "Ingrese segundo numero: ";
    cin >> numero2;

    // pregunto
    if(numero1 > numero2){
        cout << " mayor: " << numero1 << endl;
    }
    else{
        if(numero2 > numero1){
            cout << " mayor: " << numero2 << endl;
        }
        else{
            cout << "son iguales " << endl;
        }
    }

    system("pause");
    return 0;
}
