/*2) Una agencia de viaje posee la informaci�n de los cinco destinos tur�sticos que comercializa en algunos meses del a�o 2021. Por cada registro se ingresa:
C�digo de destino tur�stico (entero)
N�mero de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La informaci�n se encuentra agrupada por destino tur�stico pero no se encuentra ordenada bajo ning�n criterio. No todos los destinos tuvieron informaci�n para todos los meses.
Para indicar que finaliza la carga de un destino se ingresa un mes igual a cero.

Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el a�o 2021 entre todos los destinos tur�sticos.
B) Por cada destino tur�stico, el total recaudado.*/



#include <iostream>
using namespace std;
int main()
{
    int i, codigo, mes, cpv, acupv = 0;
    float totrecaudado;

    for (i = 1; i <= 5; i++ )
    {
        float acurecaudado = 0;
        cout << "Ingrese el codigo de destino: ";
        cin >> codigo;
        cout << endl;
        cout << "Ingrese el mes: ";
        cin >> mes;
        cout <<endl;


        while(mes != 0)
        {


            cout << endl << "Cantidad de pasajes vendidos: ";
            cin >> cpv;
            cout << endl << "Total recaudado: ";
            cin >> totrecaudado;
            cout << endl;
            acupv += cpv;
            acurecaudado += totrecaudado;

            cout << "Ingrese el mes: ";
            cin >> mes;
            cout <<endl;



        }


        cout << "El total recaudado del destino " << codigo << " es de $" << acurecaudado << endl << endl;




    }

    cout << "La cantidad de pasajes vendidos en el 2021 entre todos los destinos tur�sticos fue de: " << acupv << endl << endl;



    return 0;
}

