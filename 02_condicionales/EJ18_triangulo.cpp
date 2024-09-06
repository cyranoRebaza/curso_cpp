
/*
    EJERCICIO 18:
    Hacer un programa para ingresar por teclado la longitud de los tres lados de un tri�ngulo y que luego determine e
    informe con un cartel aclaratorio a qu� tipo de tri�ngulo corresponde:

    a. Equil�tero: cuando los tres lados sean iguales.
    b. Is�sceles: cuando dos de los tres lados sean iguales.
    c. Escaleno: cuando todos los lados sean distintos.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int ladoA;
    int ladoB;
    int ladoC;

    // pido los lados
    cout << "Ingrese el lado A: ";
    cin >> ladoA;

    cout << "Ingrese el lado B: ";
    cin >> ladoB;

    cout << "Ingrese el lado C: ";
    cin >> ladoC;

    // pregunto
    if(ladoA == ladoB){
        cout << " ES EQUILATERO" << endl;
    }
    else{
        if((ladoA != ladoB) &&(ladoB != ladoC) &&(ladoA != ladoC)){
            cout << "ES ESCALENO" << endl;
        }
        else{
            cout << "ES ISOSELES" << endl;
        }
    }


    system("pause");
    return 0;
}
