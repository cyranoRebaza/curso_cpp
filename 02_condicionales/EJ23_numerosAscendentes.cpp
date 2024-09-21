/*
    EJERCICIO 23:
    Hacer un programa para ingresar tres números, luego mostrarlos ordenados de menor a mayor.


*/

#include <iostream>

using namespace std;

int main()
{

    // declaro las variables
    int numero1;
    int numero2;
    int numero3;

    // pido los nuemros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    cout << "Ingrese numero: ";
    cin >> numero3;

    if(numero1 < numero2 && numero1 < numero3)
    {
        cout << numero1 << endl;

        if(numero2 < numero3)
        {
            cout << numero2 << endl;
            cout << numero3 << endl;
        }
        else
        {
            cout << numero3 << endl;
            cout << numero2 << endl;
        }
    }
    else
    {
        if(numero2 < numero3 && numero2 < numero1)
        {
            cout << numero2 << endl;

            if(numero3 < numero1)
            {
                cout << numero3 << endl;
                cout << numero1 << endl;
            }
            else
            {
                cout << numero1 << endl;
                cout << numero3 << endl;
            }
        }
        else
        {
            cout << numero3 << endl;

            if(numero2 < numero1)
            {
                cout << numero2 << endl;
                cout << numero1 << endl;
            }
            else
            {
                cout << numero1 << endl;
                cout << numero2 << endl;
            }
        }

    }



    system("pause");
    return 0;
}
