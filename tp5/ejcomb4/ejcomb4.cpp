/*4) Una agencia de viaje posee la informaci�n de algunos destinos tur�sticos que comercializ� en algunos de los meses del a�o 2021. Por cada registro se ingresa:
C�digo de destino tur�stico (entero)
N�mero de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La informaci�n se encuentra agrupada por destino tur�stico pero no se encuentra ordenada bajo ning�n criterio. No se sabe la cantidad de destinos tur�sticos ni la cantidad de meses
que cada destino trabaj�. Para indicar el fin del programa se ingresa un c�digo de destino igual a cero.

Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el a�o 2021 entre todos los destinos tur�sticos.
B) Por cada destino tur�stico, el total recaudado*/


#include <iostream>
using namespace std;
int main()
{
    int i, j, codigo, mes, cpv, acupv = 0, codigoanterior;
    float totrecaudado;


    cout << "Ingrese el codigo de destino: ";
    cin >> codigo;
    cout << endl;
    while(codigo != 0)
    {
        codigoanterior = codigo;
        int acurecaudado = 0;

        while (codigo == codigoanterior)
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


            cout << "Ingrese el codigo de destino: ";
            cin >> codigo;
            cout << endl;


        }


        cout << "El total recaudado del destino " << codigoanterior << " es de $" << acurecaudado << endl << endl;




    }

    cout << "La cantidad de pasajes vendidos en el 2021 entre todos los destinos turisticos fue de: " << acupv << endl << endl;



    return 0;
}

