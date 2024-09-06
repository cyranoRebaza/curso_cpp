
/*
    EJERCICIO 16:
    Un importante negocio de desinfectantes líquidos, realiza descuentos dependiendo de la cantidad de litros vendidos,
    según la siguiente escala:

    a. Si vende menos de 100 litros, no hay descuento.
    b. Si vende entre 101 y 300 litros, el descuento es del 10%.
    c. Si vende entre 301 y 500 litros, el descuento es del 15%.
    d. Finalmente, si la venta es de más de 500 litros, el descuento es del 25%.

    Hacer un programa que solicite el ingreso del importe total de la venta y la cantidad de litros vendidos. Calcular y emitir el
    importe con el descuento aplicado.


*/

#include <iostream>

using namespace std;

int main(){

    // declaracion variables
    float importeInicial;
    int litrosVendidos;

    float importeFinal;

    // pido importe y litros
    cout << "Ingrese el importe de venta: ";
    cin >> importeInicial;

    cout << "Cantidad litros vendidos: ";
    cin >> litrosVendidos;

    if(litrosVendidos > 500){
        importeFinal = importeInicial * 0.75;
    }
    else{
        if(litrosVendidos > 300){
            importeFinal = importeInicial * 0.85;
        }
        else{
            if(litrosVendidos > 100){
                importeFinal = importeInicial * 0.90;
            }
            else{
                importeFinal = importeInicial;
            }
        }
    }

    // muestro importe
    cout << "El importe final es : " << importeFinal << endl;


    system("pause");
    return 0;
}
