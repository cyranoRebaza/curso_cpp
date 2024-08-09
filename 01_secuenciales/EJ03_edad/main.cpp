
/*
    EJERCICIO 03:
    Hacer un programa que permita ingresar el año actual y el año de la fecha de
    nacimiento de una persona y luego calcule y emita por pantalla su edad.
    Nota: no hay que tener en cuenta si la persona cumplió años o no,
    simplemente calcular.
*/

#include <iostream>

using namespace std;

int main()
{
    // Declaracion de variables
    int anioActual;
    int anioNacimiento;
    int edad;

    // solicito el año actual y de nacimiento
    cout << "Ingrese el anio actual:";
    cin >> anioActual;

    cout << "Ingrese el anio de nacimiento:";
    cin >> anioNacimiento;

    // calculo la edad
    edad = anioActual - anioNacimiento;

    // muestro la edad
    cout << "La edad de la persona es:" << edad << endl;




    return 0;
}
