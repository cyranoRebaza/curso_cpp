
/*
    EJERCICIO 07:
    Hacer un programa para ingresar cuatro números distintos y luego mostrar por pantalla el mayor de ellos.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    float numero1;
    float numero2;
    float numero3;
    float numero4;

    float mayor;

    // pido los numeros
    cout << "Ingrese numero:";
    cin >> numero1;

    cout << "Ingrese numero:";
    cin >> numero2;

    cout << "Ingrese numero:";
    cin >> numero3;

    cout << "Ingrese numero:";
    cin >> numero4;

    //pregunto
    if(numero1 > numero2){
        mayor = numero1;
    }
    else{
        mayor = numero2;
    }

    if(numero3 > mayor){
        mayor = numero3;
    }

    if(numero4 > mayor){
        mayor = numero4;
    }

    // muestro
    cout << "mayor es: " << mayor << endl;


    system("pause");
    return 0;
}
