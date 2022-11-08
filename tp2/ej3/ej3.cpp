/*Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.*/

#include <iostream>
using namespace std;

int main ()
{

    int num, resto;

    cout << "Ingrese un numero: ";
    cin >> num;
    resto = num % 2;
    cout << endl;
    if (resto == 0)
    {

        cout << "El numero es par";

    }
    else
    {
        cout << "El numero es impar";
    }



    return 0;
}
