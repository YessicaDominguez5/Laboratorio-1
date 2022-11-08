//Un número Simonírico es un número positivo divisible por 15 y a la vez divisible por 3 pero no divisible por 6.
//Hacer un programa que muestre los primeros 1000 números Simoníricos. El usuario no debe ingresar nada.
#include <iostream>
using namespace std;
int main()
{
    int i= 0;
    cout << "Un numero Simonirico es un numero positivo divisible por 15 y a la vez divisible por 3 pero no divisible por 6." << endl;
    cout << "Los numeros simoniricos hasta mil son: "<< endl;

    while( i<=1000)
    {
        if (i %15 == 0 && i%3 == 0 && i%6 != 0 )
        {
            cout << i << endl;

        }
        i++;
    }


    return 0;
}
