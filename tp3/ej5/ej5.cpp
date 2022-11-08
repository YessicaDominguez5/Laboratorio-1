//Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y
//luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos


#include <iostream>
using namespace std;
int main ()
{
    int cantidad, i, contador = 0, num;

                                cout << "ingrese la cantidad de numeros de la lista: ";
    cin >> cantidad;
    for ( i = 1; i <= cantidad; i++ )
    {

        cout << "Ingrese los numeros de la lista: ";
        cin >> num;
        cout << endl;
        if ( num > 0)
        {
            contador++;
        }

    }
    cout << "Hay " << contador << " numeros positivos."<< endl;


    return 0;
}
