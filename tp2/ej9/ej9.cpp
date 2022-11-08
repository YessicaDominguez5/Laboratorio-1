//Hacer un programa para ingresar tres números y listar el máximo de ellos.

#include <iostream>
using namespace std;
int main ( )
{
    int n1, n2, n3;

    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << endl;
    cout << "Ingrese un segundo numero: ";
    cin >> n2;
    cout << endl;
    cout << "Ingrese un tercer numero: ";
    cin >> n3;
    cout << endl;
    if ( n1 > n2 && n1 > n3 )
    {
        cout << " El mayor es " << n1 << endl;
    }
    else
    {
        if ( n2 > n1 && n2 > n3 )
            cout << " El mayor es " << n2 << endl;
    else
        {
            cout << " El mayor es " << n3 << endl;
        }

    }





    return 0;
}
