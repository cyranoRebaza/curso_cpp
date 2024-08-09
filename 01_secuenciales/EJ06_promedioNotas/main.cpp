
/*
    EJERCICIO 06:
    Hacer un programa para ingresar por teclado las tres notas de exámenes de un
    alumno y luego calcule y emita por pantalla el promedio final.

*/


#include <iostream>

using namespace std;

int main()
{
    // DECLARACION DE VARIABLES
    float nota1;
    float nota2;
    float nota3;
    float promedioNotas;

    // SOLICITO LAS NOTAS
    cout << "Ingrese la nota 1:";
    cin >> nota1;

    cout << "Ingrese la nota 2:";
    cin >> nota2;

    cout << "Ingrese la nota 3:";
    cin >> nota3;


    // CALCULO EL PROMEDIO
    promedioNotas = (nota1 + nota2 + nota3)/3;

    // MUESTRO EL PROMEDIO
    cout << "\n*** PROMEDIO DE NOTAS ***\n" << endl;

    cout << "nota1:" << nota1 << endl;
    cout << "nota2:" << nota2 << endl;
    cout << "nota3:" << nota3 << endl;
    cout << "\nPromedio:" << promedioNotas << endl;



    return 0;
}
