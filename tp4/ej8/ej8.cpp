/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar si todos están ordenados en forma creciente.
En caso de haber un número igual al anterior considerarlo como creciente. Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”*/


#include <iostream>
using namespace std;
int main()
{
    int num, primer, conttotal = 0, contordenado = 0;
    bool band = false;
    cout << "Ingresar numero: ";
    cin >> num;
    cout << endl;
    while (num != 0)
    {

        conttotal++;

        if(band == false)
        { contordenado++;
            primer = num;
            band = true;
        }
        else {
            if (num >= primer)
            {
                primer = num;
                contordenado++;
            }


        }


        cout << "Ingresar numero: ";
        cin >> num;
        cout << endl;


    }

    if (conttotal == contordenado) {cout << "Conjunto Ordenado"<< endl;}
    else {
        cout << "Conjunto Desordenado" << endl;
    }

    return 0;
}
