
/*
    EJERCICIO 06:
    Una casa de video juegos otorga un descuento dependiendo del importe de la compra realizada según los
    siguientes valores:

    • Si el importe es menor a ARS 1000, no hay descuento.
    • Si el importe es ARS 1000 o más pero menor a ARS 5000, aplica un descuento del 10%.
    • Si el importe es ARS 5000 o más, aplica un descuento del 18%.

    Hacer un programa para ingresar un
    importe de venta y luego muestre por pantalla el importe final con el descuento que corresponda.


*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    float importeInicial;
    float importeFinal;

    // pido el importe
    cout << "Ingrese el importe de venta: ";
    cin >> importeInicial;

    //pregunto
    if(importeInicial >= 5000){
        importeFinal = importeInicial * 0.82f;
    }
    else{
        if(importeInicial >= 1000){
            importeFinal = importeInicial * 0.90f;
        }
        else{
            importeFinal = importeInicial;
        }
    }

    // muestro importe final
    cout << "El importe final es: $ " << importeFinal << endl;

    system("pause");
    return 0;
}
