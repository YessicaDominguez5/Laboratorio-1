/*Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registró el número de venta, el número de día y el importe de la venta. El fin de la carga de datos se indica con número de venta igual a 0.
Se pide calcular e informar:
Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
El número de día que más se recaudó en total y cuál fue la recaudación máxima.*/

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

        cout << "Ingrese el nro de día: ";
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
            cout << "El importe recaudado para el día " << i << " es $" << acu[i] << endl;


        }


    }
    cout << ".............................................................................." << endl;

    cout << "El mayor importe fue $" << mayor << ", y fue en el día " << mayordia << endl;
    cout << ".............................................................................." << endl;
    return 0;
}
