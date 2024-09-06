
/*
    EJERCICIO 20:
    El negocio de desinfectantes, antes mencionado, vende detergente suelto, y los precios se aplican según la siguiente
    escala:
    a. 25 ARS por litro, los primeros 50 litros.
    b. 20 ARS por litro, si la venta es de 101 a 200 litros.
    c. 15 ARS por litro, si la venta es de 201 a 500 litros.
    d. 10 ARS por litro, si la venta es de más de 500 litros.

    Además, si se paga en efectivo, tiene un descuento adicional del 10% sobre el importe final.

    Hacer un programa que solicite la cantidad de litros vendidos y el tipo de pago (ingresará 1 si paga en efectivo, y 0 con
    cualquier otro medio de pago); calcular y emitir por pantalla el monto final a abonar por el cliente.

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int litrosVendidos;
    bool tipoPago;

    float montoAbonar;
    float importeFinal;

    // pido los datos
    cout << "Ingrese los litros vendidos: ";
    cin >> litrosVendidos;

    cout << endl << "MEDIO PAGO DISPONIBLE: "<< endl << endl;;
    cout << "1-efectivo" << endl;
    cout << "2-otro medio pago" << endl;

    cout << endl << "Ingrese tipo de pago: ";
    cin >> tipoPago;

    //pregunto
    if(litrosVendidos > 500){
        montoAbonar = 10.0f * litrosVendidos;
    }
    else{
        if(litrosVendidos > 200){
            montoAbonar = 15.0f * litrosVendidos;
        }
        else{
            if(litrosVendidos > 100){
                montoAbonar = 20.0f * litrosVendidos;
            }
            else{
                montoAbonar = 25.0f * litrosVendidos;
            }
        }
    }

    // pregunto tipo de pago
    if(tipoPago == 1){
        importeFinal = montoAbonar * 0.90f;
    }
    else{
        importeFinal = montoAbonar;
    }

    // muestro
    cout << "El importe final es: " << importeFinal << endl;

    system("pause");
    return 0;
}
