/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y la posición dentro de la lista.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo: 35 - Posición: 7.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo: 55 - Posición: 5.
Ejemplo: -5, -10, -20, -8, -55, -400, -15, -20, 0. Se listará Máximo: -5 - Posición: 1.*/

#include <iostream>
using namespace std;
int main()
{
    int num, pos = 0, maxi = 0, maxpos= 0;
    bool bmax = false;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << endl;
    while (num != 0)
    {
        pos++;

        if(bmax == false)
        {
            maxi = num;
            bmax = true;
            maxpos = pos;
        }
        else
        {
            if (num > maxi)
            {
                maxi = num;
                maxpos = pos;
            }
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
        cout << endl;


    }

    cout << "El numero maximo es " << maxi << " en la posicion " << maxpos << endl;




    return 0;
}
