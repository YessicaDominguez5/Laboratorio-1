/*El festival Larapalooza, el mejor festival musical del mundo, brindar� una serie de conciertos distribuidos en tres jornadas distintas. Se desea un programa que registre los artistas que participar�n.
Por cada artista se registr�:
N�mero de artista (entero)
Integrantes (entero)
Jornada (1, 2 o 3)
Duraci�n del show en minutos (entero)

La informaci�n no se encuentra ordenada bajo ning�n criterio. La carga de datos se finaliza con un n�mero de artista igual a cero. Calcular e informar:
El n�mero de artista que realice el show m�s largo de la jornada 1.
La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas. (se muestran tres resultados).
La jornada m�s extensa (en minutos).
Duraci�n promedio de show por artista (se muestra un resultado).*/


#include <iostream>
using namespace std;
int main()
{
    int artista, integrantes, jornada, duracion, maslargo = 0, artistamaslargo = 0,conjor1 = 0, conjor2 = 0, conjor3 = 0, acudur1 = 0, acudur2 = 0, acudur3 = 0, acutotal = 0, conart = 0;
    bool band = false;
    cout << "Ingrese el numero de artista: ";
    cin >> artista;
    cout << endl;
    cout << "Ingrese la cantidad de integrantes de la banda: ";
    cin >> integrantes;
    cout << endl;
    cout << "Ingrese en que jornada participa(1, 2 o 3): ";
    cin >> jornada;
    cout << endl;
    cout << "Ingrese los minutos de duracion del show: ";
    cin >> duracion;
    cout << endl;
    while(artista != 0)
    {
        conart++;

        if (jornada == 1)
        {
            if (band == false)
            {
                maslargo = duracion;
                artistamaslargo = artista;
                band = true;
            }
            else
            {

                if (duracion > maslargo)
                {

                    maslargo = duracion;
                    artistamaslargo = artista;
                }

            }

        }

        if( integrantes == 1 && jornada == 1)
        {
            conjor1++;
        }
        else if(integrantes == 1 && jornada == 2)
        {
            conjor2++;
        }
        else if (integrantes == 1 && jornada ==3)
        {
            conjor3++;
        }

        if (jornada == 1)
        {
            acudur1 += duracion;
        }
        else if (jornada == 2)
        {
            acudur2 += duracion;
        }
        else if(jornada == 3)
        {
            acudur3 += duracion;
        }





        cout << "Ingrese el numero de artista: ";
        cin >> artista;
        cout << endl;
        if (artista != 0)
        {
            cout << "Ingrese la cantidad de integrantes de la banda: ";
            cin >> integrantes;
            cout << endl;
            cout << "Ingrese en que jornada participa(1, 2 o 3): ";
            cin >> jornada;
            cout << endl;
            cout << "Ingrese la duracion del show: ";
            cin >> duracion;
            cout << endl;
        }
    }

    cout << "El show mas largo fue el del artista: " << artistamaslargo << " en la jornada 1" << endl;
    cout << "La cantidad de solistas en la jornada 1 son: " << conjor1 << endl;
    cout << "La cantidad de solistas en la jornada 2 son: " << conjor2 << endl;
    cout << "La cantidad de solistas en la jornada 3 son: " << conjor3 << endl;

    if (acudur1 > acudur2 && acudur1 > acudur3)
    {
        cout << "La jornada mas extensa es la jornada 1" << endl;
    }
    if (acudur2 > acudur1 && acudur2 > acudur3)
    {
        cout << "La jornada mas extensa es la jornada 2" << endl;
    }
    if (acudur3 > acudur2 && acudur3 > acudur1)
    {
        cout << "La jornada mas extensa es la jornada 3" << endl;
    }
    acutotal = acudur1 + acudur2 + acudur3;
    cout << "El promedio de duracion por artista es de: " <<(float)acutotal/conart << endl;




    return 0;
}
