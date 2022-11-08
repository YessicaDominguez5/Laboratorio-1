//Hacer un programa para ingresar una lista 10 números e informar el máximo de los negativos y el mínimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
//Máximo Negativo: -3. Mínimo Positivo: 2.

#include <iostream>
using namespace std;
int main ()
{
    int num, i, banpos = 0, banneg = 0, maxneg, minpos;

    for ( i = 1; i <= 10; i++ )
    {
        cout << "Ingresar un numero: ";
        cin >> num;
        cout << endl;

        if ( num < 0)
        {

            if ( banneg == 0)
            {
                maxneg = num;
                banneg++;
            }
            else
            {
                if( num > maxneg)
                {
                    maxneg = num;
                }

            }

        }
        else if (num > 0)
        {

            if( banpos == 0)
            {

                minpos = num;
                banpos++;
            }
            else
            {
                if (num < minpos)
                {
                    minpos = num;
                }
            }
        }

    }



    cout << "El maximo de los negativos es " << maxneg << endl;
    cout << "El minimo de los positivos es " << minpos << endl;








    return 0;
}
