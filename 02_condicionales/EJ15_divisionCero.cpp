
/*
    EJERCICIO 15:
    Hacer un programa para ingresar dos números. Si el segundo es distinto de cero, calcular la división del primero por el
    segundo y mostrar el resultado por pantalla; caso contrario, emitir un cartel aclarando que no se puede dividir por cero.

*/

#include <iostream>

using namespace std;

int main(){

    // declaracion variables
    int numero1;
    int numero2;

    float division;

    //pido los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    //pregunto
    if(numero2 != 0){
        division = (float)numero1 / numero2;
        cout << "division: " << division << endl;
    }
    else{
        cout << "no se puede dividir por cero";
    }

    system("pause");
    return 0;
}
