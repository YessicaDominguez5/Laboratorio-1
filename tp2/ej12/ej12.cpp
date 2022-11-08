//Hacer un programa para leer tres números diferentes y determinar e informar el número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.

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
    if ( a > b && a < c || a < b && a > c )
    {
        cout << "El valor del medio es " << a << endl;
    }
    else
    {
        if ( b > a && b < c || b < a && b > c)
            cout << "El valor del medio es " << b << endl;
        else
        {
            cout << "El valor del medio es " << c << endl;
        }

    }

    return 0;
}
