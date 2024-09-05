
/*
    EJERCICIO 13:
    Hacer un programa que solicite el ingreso de un número, luego emitir un cartel por pantalla aclarando si el mismo es
    múltiplo de 5

*/

#include <iostream>

using namespace std;

int main(){

    //declaro las variables
    int numero;

    // pido el numero
    cout << "Ingrese el numero: ";
    cin >> numero;

    // pregunto
    if(numero % 5 == 0){
        cout << "es multiplo" << endl;
    }

    system("pause");
    return 0;
}
