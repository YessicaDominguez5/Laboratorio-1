/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y la posici�n dentro de la lista.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo: 35 - Posici�n: 7.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo: 55 - Posici�n: 5.
Ejemplo: -5, -10, -20, -8, -55, -400, -15, -20, 0. Se listar� M�ximo: -5 - Posici�n: 1.*/

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
