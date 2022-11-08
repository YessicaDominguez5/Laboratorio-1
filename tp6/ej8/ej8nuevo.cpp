/*El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita cargar todas los entrenamientos de sus 50 clientes, cada registro de entrenamiento contiene:
Numero de Entrenamiento (1 - 9999)
Cliente (101- 150)
Tipo de Entrenamiento ( 1 - 10 )
Tiempo del Entrenamiento (minutos)

Puede haber varios registros de entrenamiento por cliente. La información no se encuentra agrupada ni ordenada.
El fin de la carga de entrenamientos se indica con un número de entrenamiento igual a cero, informar:
a) Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos). VECTOR - OK
b) Por cada cliente, los tipos de entrenamiento que realizó. MATRIZ
c) Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados. Sólo listar aquellos registros que sean superiores a 0. MATRIZ
d) El número de cliente que más tiempo haya entrenado. VECTOR
e) Los tipos de entrenamiento que no se realizaron por ningún cliente. VECTOR*/

#include <iostream>
using namespace std;
#include <clocale>
#include <iomanip>
int main()
{
    setlocale(LC_ALL,"spanish");
    int nroentrenamiento = 0, nrocliente = 0, tipo = 0, tiempo = 0, i, j, vectiempo[50] = {}, mattipo[50][10] = {}, mayortiempo = vectiempo[0], mayorcliente;

    cout << "Ingrese número de entrenamiento(1 a 9999): ";
    cin >> nroentrenamiento;
    cout << endl;
    while(nroentrenamiento != 0 && nroentrenamiento < 10000)
    {
        cout << "Ingrese número de cliente(101 al 150):";
        cin >> nrocliente;
        cout << endl<< "Ingrese tipo de entrenamiento(1 al 10): ";
        cin >> tipo;
        cout << endl << "Ingrese tiempo de entrenamiento en minutos: ";
        cin >> tiempo;

        vectiempo[nrocliente - 101] += tiempo;
        mattipo[nrocliente - 101][tipo - 1] += tiempo;


        // punto d
        if(vectiempo[nrocliente - 101] > mayortiempo)
        {

            mayortiempo = vectiempo[nrocliente - 101];
            mayorcliente = nrocliente;
        }




        cout << ".............................................." << endl;
        cout << endl << "Ingrese número de entrenamiento(1 a 9999): ";
        cin >> nroentrenamiento;
        cout << endl;
    }

//punto a

    for(int i = 0; i < 50; i++)
    {
        int hora = 0;
        int minutos = 0;

        hora = vectiempo[i] / 60;
        minutos = vectiempo[i] % 60;

        cout << "...................................................................................." << endl;


        cout << endl << "El cliente " << i+101 << " tuvo un total de entrenamiento de " << hora << " : " << minutos << endl;

    }
// punto b
    for (int i = 0; i< 50; i++)
    {

        for(int j = 0; j < 10; j++)
        {

            if (mattipo[i][j] > 0)
            {
                cout << "...................................................................................." << endl;
                cout << endl << "Cliente " << i + 101 << " realizó el entrenamiento: " << j + 1 << endl;

            }



        }



    }
// punto c

    for(int i = 0; i < 50; i++)
    {

        for(int j = 0; j < 10; j++)
        {

            if (mattipo[i][j] > 0)
            {
                cout << "...................................................................................." << endl;
                cout << endl << "Cliente: " << i + 101 << " Entrenamiento: " << j + 1 << " Tiempo: " << mattipo[i][j] << " minutos" << endl << endl;
            }


        }

    }




// punto d
    cout << "...................................................................................." << endl;
    cout << endl <<"El cliente que hizo el mayor tiempo de entrenamiento fue el cliente " << mayorcliente;

// punto e

    for(int j = 0; j < 10; j++)
    {
        int cont = 0;
        for(int i = 0; i < 50; i++)
        {

            if (mattipo[i][j] != 0)
            {

                cont++;

            }


        }

        if (cont == 0)
        {

            cout << endl << "...................................................................................." << endl;
            cout << endl<< "No se realizó por ningún cliente tipo: " << j + 1 << endl;
        }



    }




    return 0;
}
