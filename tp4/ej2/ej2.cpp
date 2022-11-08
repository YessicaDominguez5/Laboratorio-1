/*Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listará Máximo -5.*/

#include <iostream>
using namespace std;
int main ()
{
    int num, maxi;
    bool bmax = false;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << endl;
    while (num != 0)
    {
        if(bmax == false)
        {
            maxi = num;
            bmax = true;
        }
        else
        {
            if (num > maxi)
            {
                maxi = num;
            }
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
        cout << endl;


    }

cout << "El numero maximo es " << maxi << endl;




    return 0;
}
