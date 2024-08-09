
/*
    EJERCICIO 05:
    Una casa de computación paga a sus empleados un sueldo fijo de ARS15000
    más una comisión del 5% sobre el total facturado por cada empleado. Hacer un
    programa para ingresar el total facturado por un empleado y que luego calcule
    y emita por pantalla el sueldo total a cobrar por el mismo.

*/

#include <iostream>

using namespace std;

int main()
{
    // DECLARO LAS VARIABLES
    const float SUELDO_FIJO = 15000;
    float comision;
    float totalFacturado;
    float sueldoTotal;


    // SOLICITO TOTAL FACTURADO
    cout << "Ingrese el total facturado: ";
    cin >> totalFacturado;


    // CALCULO EL SUELDO
    comision = totalFacturado * 0.05;

    sueldoTotal = SUELDO_FIJO + comision;

    // MUESTRO EL SUELDO
    cout <<  endl << "Datos del empleado:\n" << endl;

    cout << "Total facturado   :" << "$ " << totalFacturado << endl;
    cout << "Comision          :" << "$ " << comision << endl;
    cout << "Sueldo fijo       :" << "$ " << SUELDO_FIJO << endl;
    cout << "\nsueldo total    :" << "$ " << sueldoTotal << endl;

    return 0;
}
