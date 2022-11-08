//Hacer un programa para ingresar cinco números y listar el máximo de ellos.

#include <iostream>
using namespace std;
int main ()
{
    int n1, n2, n3, n4, n5;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << endl;
    cout << "Ingrese un segundo numero: ";
    cin >> n2;
    cout << endl;
    cout << "Ingrese un tercer numero: ";
    cin >> n3;
    cout << endl;
    cout << "Ingrese un cuarto numero: ";
    cin >> n4;
    cout << endl;
    cout << "Ingrese un quinto numero: ";
    cin >> n5;
    cout << endl;
    if ( n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5 )
    {
        cout << "El mayor es " << n1 << endl;
    }
    else
    {
        if (n2 > n3 && n2 > n4 && n2 > n5)
            cout << "El mayor es " << n2 << endl;
        else
        {
            if (n3 > n4 && n3> n5)
                cout << "El mayor es " << n3 << endl;
            else
            {
                if (n4 > n5)
                    cout << "El mayor es " << n4 << endl;
                else
                {
                    cout << "El mayor es " << n5 << endl;
                }

            }

        }


    }


    return 0;
}
