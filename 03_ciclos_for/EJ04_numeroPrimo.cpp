
/*
    EJERCICIO 04:
    Hacer un programa que solicite UN número y luego calcule y emita un cartel
    aclaratorio si el mismo es primo o no es primo.

    Nota: un numero es primo cuando es divisible únicamente por 1 y por sí
    mismo.

    ************************************
    - usar un for para buscar divisores

*/

#include <iostream>

using namespace std;

int main(){

    // declaro las variables
    int numero;
    int divisores = 0;

    // pido el numero
    cout << "Ingrese numero: ";
    cin >> numero;

    //uso for para buscar divisores
    for(int i = 1; i <= numero; i++){
        if(numero%i == 0){
            divisores++;
        }
    }

    // primo --> divisores ser dos
    if(divisores == 2){
        cout << " Es primo" << endl;
    }
    else{
        cout << " No es primo" << endl;
    }
    system("pause");
    return 0;
}
