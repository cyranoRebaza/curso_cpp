/*
    EJERCICIO 21:
    Una importante marca de computadoras permite elegir cierta configuración del equipo a comprar. Para ello existe la
    siguiente escala de precios:

                    I5 (1)      i7 (2)      i9 (3)
        8 RAM (1)   USD 800     USD 900     USD 1200
        16 RAM (2)  USD 900     USD 1000    USD 1400
        32 RAM (3)  USD 1000    USD 1400    USD 2000

    Además, el equipo viene con un disco que permite almacenar 500 GB de información, pudiéndose ampliar a 1 TB, si así lo
    desea, el cual tiene un costo adicional de USD 300.

    Hacer un programa que solicite la opción de procesador, la opción de memoria RAM, y si extiende el disco o no (ingresa 1
    para extender y 0 para no extender). Calcular y emitir por pantalla el monto de la máquina seleccionada.


*/

#include <iostream>

using namespace std;

int main()
{

    // declaro las variables
    int procesador;
    int memoriaRam;
    bool extiendeDisco;

    float precio;

    //pido los datos
    cout << "OPCION PROCESADOR:" << endl << endl;
    cout << "1- si es i5" << endl;
    cout << "2- si es i7" << endl;
    cout << "3- si es i9" << endl;

    cout << "Ingrese la opcion de procesador: ";
    cin >> procesador;

    cout << endl << "********************************" << endl;

    cout << "OPCION MEMORIA RAM:" << endl << endl;
    cout << "1- 8 RAM" << endl;
    cout << "2- 16 RAM" << endl;
    cout << "3- 32 RAM" << endl;

    cout << "Ingrese la opcion de memoria RAM: ";
    cin >> memoriaRam;

    cout << endl << "********************************" << endl;

    cout << "OPCION DISCO:" << endl << endl;
    cout << "0- NO extender disco" << endl;
    cout << "1- extender disco" << endl;

    cout << "Ingrese la opcion de disco: ";
    cin >> extiendeDisco;

    cout << endl << "********************************" << endl;

    // pregunto
    switch(procesador)
    {
    case 1:
        switch(memoriaRam)
        {
        case 1:
            precio = 800;
            break;
        case 2:
            precio = 900;
            break;
        case 3:
            precio = 1000;
            break;
        }

    case 2:
        switch(memoriaRam)
        {
        case 1:
            precio = 900;
            break;
        case 2:
            precio = 1000;
            break;
        case 3:
            precio = 1400;
            break;
        }

    case 3:
        switch(memoriaRam)
        {
        case 1:
            precio = 1200;
            break;
        case 2:
            precio = 1400;
            break;
        case 3:
            precio = 2000;
            break;
        }


        // pregunto opcion disco
        if(extiendeDisco == 1)
        {
            precio = precio * 300;
        }

        // muestro precio final
        cout << "el precio de la PC es: " << precio << endl << endl;


    }


    system("pause");
    return 0;
}
