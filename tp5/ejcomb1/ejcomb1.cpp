/*1) Una agencia de viajes posee la informaci�n de los cinco destinos tur�sticos que comercializa en cada uno de los meses del a�o 2021. Por cada destino y mes registra:
C�digo de destino tur�stico (entero)
N�mero de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La informaci�n se encuentra agrupada por destino tur�stico pero no se encuentra ordenada bajo ning�n criterio. Hay un registro para cada destino tur�stico y mes.

Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el a�o 2021 entre todos los destinos tur�sticos.
B) Por cada destino tur�stico, el total recaudado.*/

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

    cout << "La cantidad de pasajes vendidos en el 2021 entre todos los destinos tur�sticos fue de: " << acupv << endl << endl;



    return 0;
}

