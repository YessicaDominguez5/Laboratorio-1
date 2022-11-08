/*El teatro Lara Rex presentará la obra "Ojo que se viene el primer parcial" en una única jornada. El mismo cuenta con 1200 butacas a un costo de $5000.
Se pide un programa para poder ingresar todos los tickets vendidos para esta presentación. Por cada venta se registró:
Número de venta
Cantidad de butacas

La venta de tickets se finaliza con un número de venta igual a cero o bien cuando no se dispongan de más butacas para vender. Se pide calcular e informar:
El total recaudado.
La cantidad de butacas que quedaron sin vender.*/

#include <iostream>
using namespace std;
int main()
{
    int nv, cantidad, acurecaudado= 0, bo = 1200;
    float precio;

    cout << "Ingresar numero de venta: ";
    cin >> nv;
    cout << endl << "Ingresar cantidad de butacas de esa venta: ";
    cin >> cantidad;
    cout << endl;
    while ( nv != 0 && bo > 0)
    {

        bo = bo - cantidad;
        precio = cantidad * 5000;
        acurecaudado += precio;


        if (bo > 0)
        {
            cout << "Ingresar numero de venta: ";
            cin >> nv;
            cout << endl << "Ingresar cantidad de butacas de esa venta: ";
            cin >> cantidad;
            cout << endl;
        }




    }

    cout << "El total recaudado es $" << acurecaudado << endl;


    cout << "Las butacas que quedaron sin vender son: " << bo << endl;


    return 0;
}
