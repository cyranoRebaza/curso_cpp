
/*
    EJERCICIO 13:
    Hacer un programa que solicite el ingreso de un n�mero, luego emitir un cartel por pantalla aclarando si el mismo es
    m�ltiplo de 5

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
