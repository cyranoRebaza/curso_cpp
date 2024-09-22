
/*
    EJERCICIO 07:
    Hacer un programa que solicite 20 edades y luego calcule el promedio de edad
    de aquellas personas mayores a 18 años.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las  variables
    int edad;
    float promedio;

    int cantidadEdades = 0;
    int sumaEdades = 0;

    //  pido las 20 edades
    for(int i = 0; i < 20;i++){

        //pido edad
        cout << "Ingrese edad: ";
        cin >> edad;

        // pregunto edad mayor a 18
        if(edad > 18){
            sumaEdades += edad;
            cantidadEdades++;
        }

    }

    // calculo promedio
    promedio = (float)sumaEdades / cantidadEdades;

    // muestro el promedio
    cout << "El promedio de edades mayores a 18 es: " << promedio << endl;

    system("pause");
    return 0;
}
