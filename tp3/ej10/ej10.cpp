//Dada una lista de 7 números informar cual es el primer y segundo número impar ingresado.
//Ejemplo: 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.

#include <iostream>
using namespace std;
int main ()
{
    int num, i, primer, segundo, bandera = 0;

                                           for ( i = 1; i <= 7; i++)
    {
        cout << "Ingresar numero: ";
        cin >> num;
        cout << endl;

        if ( num % 2 != 0 && bandera == 0)
        {
            primer = num;
            bandera++;
        }
        else if ( num % 2 != 0 && bandera == 1)
        {
            segundo = num;
            bandera++;

        }


    }
    cout << "El primer impar ingresado es " << primer << endl;
    cout << "El segundo impar ingresado es " << segundo << endl;




    return 0;
}
