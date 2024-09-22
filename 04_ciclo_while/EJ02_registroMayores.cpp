
/*
    EJERCICIO 02:
    Hacer un programa que solicite la edad de un grupo de personas. El programa
    deberá pedir edades hasta que se ingrese una edad menor a 18 años. Deberá
    mostrar por pantalla cuántas personas mayores se registraron.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int edad;
    int cantidadMayores;

    // pido la edad
    cout << "NOTA:Para finalizar registro ingrese una edad menor a 18" << endl;
    cout << "Ingrese edad: ";
    cin >> edad;

    cantidadMayores = 0;
    while(edad > 18){
        //cuento
        cantidadMayores++;

       // pido la edad nuevamente
        cout << "Ingrese edad: ";
        cin >> edad;
    }

    // muestro la cantidad personas mayores registradas
    cout << " La cantidad personas mayores registradas es: " << cantidadMayores << endl;

    system("pause");
    return 0;
}
