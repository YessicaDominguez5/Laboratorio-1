/*Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente.
En caso de haber dos números “empatados” considerarlos como crecientes. Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”*/


#include <iostream>
using namespace std;
int main ()
{
    int num, i, ban = 0, anterior;

                      for ( i = 1; i <= 8; i++)
    {
        cout << "ingresar numero: ";
        cin >> num,
            cout << endl;
        if ( ban == 0)
        {
            anterior = num;
            ban++;
        }
        else
        {
        if ( num >= anterior)
                anterior = num;

        else
        {
            ban++;
        } }


    }
    if ( ban == 1){ cout << "conjunto ordenado" << endl;

    }
    else if (ban >= 2) { cout << "conjunto desordenado" << endl;
    }
    return 0;
}
