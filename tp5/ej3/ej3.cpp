/*Una empresa tiene 50 empleados que trabajaron durante 7 días hábiles. Se confecciona una serie de registros con el objeto de controlar la asistencia de sus empleados.
Hay un primer registro por empleado que contiene:
- Nro. de Legajo
- Cantidad de horas teóricas a trabajar por semana

A continuación de este registro, siete registros más, uno por cada uno de los 7 días con los siguientes datos:
- Hora de entrada (entero)
- Hora de salida (entero)

El día que falta el empleado se ingresa cero en la hora de entrada y salida respectivamente.

Después de estos siete registros aparece nuevamente un registro de otro empleado seguido por los registros de los días trabajados por este último y así hasta el último empleado.

Realizar un programa que ingresando los datos indicados determine e informe:
a) Los nros. de legajo de los empleados que faltaron algún día en la semana.
b) Para cada empleado indicar con una leyenda aclaratoria si trabajó de más, igual o de menos a las horas teóricas que tiene asignadas en la semana.*/

#include <iostream>
using namespace std;
int main()
{
    int legajo,hsatrabajar, hentrada, hsalida, i, j, hs, acuhs = 0;
    bool falto = false;

    for(i = 1; i<= 3; i++)
    {
        hs = 0;
        acuhs = 0;
        falto = false;

        cout << "Ingrese legajo: ";
        cin >> legajo;
        cout << endl << "Ingrese las hs que deberia trabajar por semana: ";
        cin >> hsatrabajar;
        cout << endl;

        for( j = 1; j <= 7; j++)
        {
            cout << "Dia " << j << endl;
            cout << "Ingrese la hora de entrada: ";
            cin >> hentrada;
            cout << endl << "Ingrese la hora de salida: ";
            cin >> hsalida;
            cout << endl;
            hs = hsalida - hentrada;
            acuhs += hs;

            if( hentrada == 0 && hsalida == 0)
            {
                falto = true;

            }


        }

        if (falto)
        {
            cout << "El empleado " << legajo << "falto al menos una vez" << endl;
        }
        if (acuhs > hsatrabajar)
        {
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            cout << "Trabajo de mas"<< endl;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        }
        else if(acuhs < hsatrabajar)
        {
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            cout << "Trabajo de menos" << endl;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        }
        else
        {
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            cout << "Trabajo las horas que debia" << endl;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        }








    }

































    return 0;
}
