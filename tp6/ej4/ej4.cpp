/*Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registr� el n�mero de venta, el n�mero de d�a y el importe de la venta. El fin de la carga de datos se indica con n�mero de venta igual a 0.
Se pide calcular e informar:
Por cada d�a, la recaudaci�n total (s�lo de aquellos d�as que tuvieron recaudaci�n).
El n�mero de d�a que m�s se recaud� en total y cu�l fue la recaudaci�n m�xima.*/

#include <iostream>
using namespace std;
#include <clocale>
int main()
{

    setlocale(LC_ALL,"spanish");

    int nv,nd,i, mayordia;
    float  vec[3], acu[31]= {}, importe, mayor = acu[0];

    cout << "Ingrese el nro de venta: ";
    cin >> nv;
    cout << endl;

    while(nv!= 0)
    {

        cout << "Ingrese el nro de d�a: ";
        cin >> nd;
        cout << endl << "Ingrese el importe: ";
        cin >> importe;
        cout << endl;

        vec[0] = nv;
        vec[1] = nd;
        vec[2] = importe;

        // punto a
        for(i = 1; i <= 31; i++)
        {

            if(nd ==i)
            {

                acu[i] += importe;


            }


        }

        for (i =1; i <= 31; i++)
        {

            if (acu[i] > mayor)
            {

                mayor = acu[i];
                mayordia = i;

            }



        }

        cout << "Ingrese el nro de venta: ";
        cin >> nv;
        cout << endl;



    }


    for (i = 1; i <= 31; i++)
    {

        if(acu[i] > 0)
        {

//punto a
            cout << "El importe recaudado para el d�a " << i << " es $" << acu[i] << endl;


        }


    }
    cout << ".............................................................................." << endl;

    cout << "El mayor importe fue $" << mayor << ", y fue en el d�a " << mayordia << endl;
    cout << ".............................................................................." << endl;
    return 0;
}
