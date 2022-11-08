/*La asociación de maratonistas de maratones de verdad (no de series) quiere registrar la información de las últimas 5 maratones que se realizaron en el país.
Por cada participante se registró la siguiente información:
Número de maratón (entero)
Número de participante (entero)
Género ('F' - Femenino, 'M' - Masculino, 'X' - Prefiere no indicarlo)
Tiempo (en minutos)
Finaliza (1 - Finaliza, 0 - Abandona)

La información se encuentra agrupada por número de maratón. Cada maratón puede tener una cantidad distinta de participantes.
Para indicar el fin de la carga de datos de una maratón se ingresa un número de participante negativo.

Se pide calcular e informar:
-   El porcentaje de participantes por género.
- El tiempo promedio (en minutos) entre todos los que hayan finalizado maratones.
- Por cada maratón, la persona que haya realizado el menor tiempo y haya finalizado la competencia. Indicar el número de participante y el tiempo.*/

#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;
int main()
{
    int i, participante, tiempo, contf = 0, contm = 0, contx = 0, acutiempo = 0, contparfin = 0, menortiempo = 0, menortiempopar = 0;
    char genero;
    bool finaliza, bandera;

    for(i = 1; i <= 5; i++)
    {
        cout << "................................"<< endl;
        cout << "Maraton nro: " << i << endl;
        cout << "................................"<< endl;
        cout << "Nro de participante: ";
        cin >> participante;
        cout << endl;
        int menortiempo = 0, menortiempopar = 0, bandera = false;

        while(participante > 0)
        {
            cout << "Genero ('F' - Femenino, 'M' - Masculino, 'X' - Prefiere no indicarlo): ";
            cin >> genero;
            genero = toupper(genero);
            cout << endl;
            //punto1
            if(genero == 'F')
            {
                contf++;
            }
            else if (genero == 'M')
            {
                contm++;
            }
            else
            {
                contx++;
            }
            cout << "Tiempo en minutos: ";
            cin >> tiempo;
            cout << endl;
            cout << "Finaliza la maraton?(1- si, 0- no): ";
            cin >> finaliza;
            cout << endl;
            //punto 2
            if (finaliza == 1)
            {

                acutiempo += tiempo;
                contparfin ++;
                if(bandera == false)
                {

                    menortiempo = tiempo;
                    menortiempopar = participante;
                    bandera = true;

                }
                else
                {
                    if(tiempo < menortiempo)
                    {
                        menortiempo = tiempo;
                        menortiempopar = participante;
                    }
                }


            }




            cout << "Nro de participante: ";
            cin >> participante;
            cout << endl;

        }


        cout << "la persona que realizo el menor tiempo y finalizo la competencia fue el participante " << menortiempopar << " con un tiempo de " << menortiempo << " minutos." << endl << endl;







    }

    cout << "El porcentaje de participantes femeninos es de: " << fixed << setprecision(2) <<(float)(contf*100)/(contf + contm + contx) << "%" << endl << endl;
    cout << "El porcentaje de participantes masculinos es de: " << fixed << setprecision(2) << (float)(contm*100)/(contf + contm + contx) << "%" << endl << endl;
    cout << "El porcentaje de participantes que prefieren no indicarlo es de: " << fixed << setprecision(2)<< (float)(contx*100)/(contf + contm + contx) << "%" << endl << endl;
    cout << "El tiempo promedio (en minutos) entre todos los que hayan finalizado maratones es de: " << fixed << setprecision(2)<< (float)acutiempo/contparfin << endl <<endl;


//tot....100
//contf...x










    return 0;
}
