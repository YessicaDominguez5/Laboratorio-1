/*Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando Laradona. Por cada partido se registró:
Número de partido
Minutos jugados
Tarjetas amarillas
Tarjetas rojas
Goles

Existe un registro para cada partido. Los mismos se encuentran ordenados por número de partido. Se pide calcular e informar:
La cantidad de partidos que no jugó (partidos con minutos igual a cero)
La cantidad de partidos que jugó por completo (minutos >= 90)
El promedio de tarjetas recibidas por partido.
El número de partido en el que haya convertido mayor cantidad de goles. Indicar también los goles convertidos.
La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de partidos consecutivos en los que haya convertido.*/

#include <iostream>
using namespace std;
int main()
{
    int min, amarillas, rojas, goles =0, nojugado, connojugado = 0, concompleto = 0, acuama = 0, acurojas = 0, tottarj = 0, mayor = 0, mayorpart = 0, i, contgoles = 0, mayormayor = 0;
    bool bangoles = false;
    for ( i = 1; i<=5; i++)
    {

        cout << "Partido nro " << i << endl;
        cout << "Minutos jugados: ";
        cin >> min;
        cout << endl << "Tarjetas amarillas: (hasta 2)";
        cin >> amarillas;
        cout << endl << "Tarjetas rojas: (hasta 1) ";
        cin >> rojas;
        cout << endl << "Goles: ";
        cin >> goles;
        cout << endl;

        if (min == 0)
        {
            connojugado++;
        }

        if (min >= 90)
        {
            concompleto++;

        }

        acuama += amarillas;
        acurojas += rojas;

        if (i == 1)
        {
            mayor = goles;
            mayorpart = i;

        }
        else
        {
            if (goles > mayor)
            {
                mayor = goles;
                mayorpart = i;
            }
        }

        if(bangoles == 0)
        {
            if (goles> 0)
            {
                contgoles++;
                bangoles =1;
            }
            else
            {
                bangoles =0;
            }


        }
        else
        {
            if(goles>0)
            {

                contgoles++;
            }
            else
            {
                if( contgoles > mayormayor)
                {
                    mayormayor= contgoles;
                    bangoles=0;
                    contgoles =0;
                }
                else
                {
                    bangoles =0;
                    contgoles =0;
                }
            }

        }





    }
    cout << "Los partidos no jugados por Laradona fueron: "<< connojugado << endl;
    cout << "Los partidos jugados por completo fueron: "<< concompleto << endl;
    tottarj = acuama + acurojas;
    cout << "El promedio de tarjetas es: " << (float)tottarj /19 << endl;
    cout << "El partido que tuvo mas goles fue " << mayorpart << " con " << mayor << " goles." << endl;
    cout << "la mejor racha consecutiva fue de " << mayormayor << " partidos" << endl;


    return 0;
}
