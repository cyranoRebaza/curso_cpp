
/*
    EJERCICIO 17:
    Hacer un programa que solicite el ingreso de las notas del primer parcial, y del segundo parcial de una estudiante de
    programación. El programa deberá analizar las notas y emitir la situación de la estudiante, según la siguiente escala:

    a. Si tiene 8 o más en ambos parciales, emitir “aprobación directa”.
    b. Si tiene entre 4 y 7 en ambos parciales, emitir “rinde examen final”.
    c. Si tiene menos de 4 en alguno de los dos parciales, emitir “debe recuperar”.

    El programa debe emitir solo un cartel, el que corresponda.

*/

#include <iostream>

using namespace std;

int main(){

    // declaramos las variables
    int nota1;
    int nota2;

    // pido las notas
    cout << "Ingrese la nota: ";
    cin >> nota1;

    cout << "Ingrese la nota:";
    cin >> nota2;

    //pregunto
    if(nota1 > 8 && nota2 > 8){
        cout << "Aprobacion directa" << endl;
    }
    else{
        if(nota1 > 4 && nota2 > 4){
            cout << "Rinde final" << endl;
        }
        else{
            cout << "Recupera" << endl;
        }
    }

    system("pause");
    return 0;
}
