//Hacer un programa que muestre los números primos entre el 1 y el 10000. El usuario no debe ingresar nada en este programa.

#include <iostream>
using namespace std;
int main ()
{
cout << "Numeros primos: ";

    for ( int i = 1; i <= 10000; i++)
    {
        int cont = 0;
        for(int j = 1 ; j <= i; j++)
        {
            if( i % j == 0)
            {
                cont ++;
            }

        }

if( cont == 2){ cout << endl << i << endl;}
    }

    return 0;
}
