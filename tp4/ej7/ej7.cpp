/*Dada una lista de números que finaliza cuando se ingresa un número divisible por 7, informar cual es el anteúltimo y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.
Nota: Contemplar la posibilidad que podría no haber números impares en la lista.*/

#include <iostream>
using namespace std;
int main ()
{
    int num, ante = 0, ult = 0;
    bool band = false;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << endl;
    while (num % 7 != 0)
    {
        if (num % 2 != 0 && band == false)
        {
            ult = num;
            band = true;
        }

        else if ( num % 2 != 0 && band == true)
        {

            ante = ult;
            ult = num;

        }


        cout << "Ingrese un numero: ";
        cin >> num;
        cout << endl;

    }
    if (ante == 0 && ult == 0)
    {
        cout << "no existe ningun numero impar" << endl;
    }

    cout << "El ultimo numero impar de la lista es " << ult << " y el anteultimo es " << ante << endl;




    return 0;
}


