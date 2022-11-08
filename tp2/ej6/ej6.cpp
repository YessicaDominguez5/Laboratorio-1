/*Hacer un programa para ingresar por teclado tres números
y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí,
caso contrario no emitir nada. Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales.*/

#include <iostream>
using namespace std;
int main ()
{

    int a, b, c;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << endl;
    cout << "Ingrese un segundo numero: ";
    cin >> b;
    cout << endl;
    cout << "Ingrese un tercer numero: ";
    cin >> c;
    cout << endl;
    if (a == b && b == c )
    {

        cout << "Los tres son iguales" << endl;

    }


    return 0;
}
