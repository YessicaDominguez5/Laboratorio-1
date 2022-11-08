/*1) Una agencia de viajes posee la información de los cinco destinos turísticos que comercializa en cada uno de los meses del año 2021. Por cada destino y mes registra:
Código de destino turístico (entero)
Número de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada bajo ningún criterio. Hay un registro para cada destino turístico y mes.

Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el año 2021 entre todos los destinos turísticos.
B) Por cada destino turístico, el total recaudado.*/

#include <iostream>
using namespace std;
int main()
{
    int i, j, codigo, mes, cpv, acupv = 0;
    float totrecaudado;

    for (i = 1; i <= 5; i++ )
    {
        float acurecaudado = 0;
        cout << "Ingrese el codigo de destino: ";
        cin >> codigo;
        cout << endl;

        for ( j = 1; j<= 12; j++)
        {

            cout << "Ingrese el mes: ";
            cin >> mes;
            cout << endl << "Cantidad de pasajes vendidos: ";
            cin >> cpv;
            cout << endl << "Total recaudado: ";
            cin >> totrecaudado;
            cout << endl;
            acupv += cpv;
            acurecaudado += totrecaudado;




        }


        cout << "El total recaudado del destino " << codigo << " es de $" << acurecaudado << endl << endl;




    }

    cout << "La cantidad de pasajes vendidos en el 2021 entre todos los destinos turísticos fue de: " << acupv << endl << endl;



    return 0;
}

