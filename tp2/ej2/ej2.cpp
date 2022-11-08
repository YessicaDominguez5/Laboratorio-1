/*Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo. */


#include <iostream>
using namespace std;

int main ()
{
    int num1, num2, resultado;

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << endl;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    resultado = num1 % num2;
    cout << endl;
    if (resultado == 0)
    {

        cout << num1 << " es multiplo de " << num2;





    }

    return 0;

}

