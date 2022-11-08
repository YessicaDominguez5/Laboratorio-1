/*Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que se ingrese el 5º número par.
Calcular e informar:
La cantidad de ternas de números negativos ingresados de manera consecutiva.
Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2*/

#include <iostream>
using namespace std;
int main ()
{
    int num, cont = 0, conneg = 0, conter = 0;
    bool band = false;
    cout << "Ingresar numero: ";
    cin >> num;
    cout << endl;
    while (cont < 5)
    {
        if( num % 2 == 0)
        {
            cont++;
        }

        if (band == false && num < 0)
        {
            conneg ++;
            if( conneg == 3){
                    conter++;
                    conneg = 0;
                    band = true;

                }

            }
        else if (band == true && num >= 0)
        {
            band = false;
        }

        if (cont < 5){

        cout << "Ingresar numero: ";
        cin >> num;
        cout << endl;
        }


    }


    cout << "La cantidad de ternas son: " << conter << endl;



    return 0;
}
