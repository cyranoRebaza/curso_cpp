
/*
    EJERCICIO O1:
    Se dispone de una lista de 10 grupos de números enteros separados entre ellos
    por ceros. Se pide determinar e informar:

    a. El número de grupo con mayor porcentaje de números impares
    positivos respecto al total de números que forman el grupo.
    b. Para cada grupo, el último número primo y en qué orden apareció en
    ese grupo. Si en un grupo no hubiera números primos, informarlo con
    un cartel aclaratorio.

    c. Informar cuántos grupos están formados por todos números ordenados
    de mayor a menor.


*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;

    // PUNTO A)
    int contadorTotal;
    int contadorImparesPositivos;

    float porcentaje;

    float maximoPorcentaje = 0;
    int grupoMaximo = 0;

    // PUNTO B)
    int orden;
    int primo;
    int divisorPrimo;

    int posicionPrimo;


    // PUNTO C)
    int mayor;
    bool banderaDescendente;

    int contadorOrdenados = 0;


    for(int i= 0;i < 3; i++ ){

        cout << "GRUPO: " << i + 1 << endl;

        //pido numero
        cout << "Ingrese numero: ";
        cin >> numero;

        //PUNTO A)
        contadorTotal = 0;
        contadorImparesPositivos = 0;

        // PUNTO B)
        orden = 0;
        primo = 0;

        // PUNTO C)
        mayor = numero;
        banderaDescendente = false;


        while(numero != 0){

            // PUNTO A)

            //cuento cada numero ingresado
            contadorTotal++;

            //cuento los numeros impares positvos
            if((numero % 2 != 0) && numero > 0){
                contadorImparesPositivos++;
            }

            // PUNTO B)
            orden++; // cuento para saber la posicion
            divisorPrimo = 0;

            // calculo si es primo
            for(int j = 1; j <= numero; j++){
                if(numero % j == 0){
                    divisorPrimo++;
                }
            }

            if(divisorPrimo == 2){
                primo = numero;
                posicionPrimo = orden;

            }

            // PUNTO C)
            //pregunto si el numero ingresado en menor que el anterior
            if(banderaDescendente == false){
                if(numero < mayor){
                    mayor = numero;
                    banderaDescendente = true;
                }

            }
            else{
                if(numero < mayor){
                    mayor = numero;
                }
            }










            //pido numero
            cout << "Ingrese numero: ";
            cin >> numero;
        }//FIN WHILE INTERNO

        // PUNTO A)

        // calculo el porcentaje de impares positivos respecto total numeros
        porcentaje = contadorImparesPositivos * 100.0f / contadorTotal;

        // calculo el maximo porcentaje de los impares positivos
        if(porcentaje > maximoPorcentaje){
            maximoPorcentaje = porcentaje;

            //calculo el numero de grupo
            grupoMaximo = i + 1;
        }

        // PUNTO B)
        if(primo != 0){
            cout << "B) El ultimo numero primo es: " << primo << ", y  aparecio en el orden: " << posicionPrimo << endl;

        }
        else{
            cout << "NO hay primo";
        }

        // PUNTO C)
        //pregunto si ingresaron numeros de mayor a menor
        if(banderaDescendente != false){
            contadorOrdenados++;
        }






    }//FIN FOR EXTERNO

    // PUNTO A)
    cout << " A) El numero de grupo con maximo porcentaje de impares positivos es: " << grupoMaximo << endl;

    // PUNTO C)
    cout << "C) La cantidad de grupos con numeros ordenados es: " << contadorOrdenados << endl;


    system("pause");
    return 0;
}
