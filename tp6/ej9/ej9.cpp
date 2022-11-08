/*Una fábrica tiene 80 empleados, y dispone de un primer lote de registros con la siguiente información:
- Nro. empleado (1 a 80)
- Valor de una hora de trabajo
- Valor de la hora extra de trabajo

A fin de mes se desean calcular los sueldos de los empleados que trabajaron y para ello se cuenta con un segundo lote de registros con la siguiente información:
- Nro. empleado (1 a cantemple)
- Día
- Total de horas trabajadas en el día

Este lote finaliza con un registro con nro. de empleado igual a cero, y sólo figuran los registros de los empleados que trabajaron durante el mes. Calcular e informar el sueldo de cada uno de los empleados, teniendo en cuenta que a partir de la 9na hora del día se comienza a pagar como hora extra.*/

#include <iostream>
using namespace std;
#include <clocale>
int main()
{
    setlocale(LC_ALL,"spanish");

    const int cantemple = 5;
    int i, empleado, dia, horastrabajadas = 0, hora = 0, horaextra = 0;
    float valorhora, valorextra, vecvalor [cantemple] = {}, vecextra[cantemple] = {}, matvalordia[cantemple][31] = {};

    for(i = 1; i <= cantemple; i++)
    {

        cout << "Empleado(1 al 80): ";
        cin >> empleado;
        cout << endl;
        cout << "Valor de una hora de trabajo: ";
        cin >> valorhora;
        cout << endl << "Valor de la hora extra: ";
        cin >> valorextra;
        cout << endl;

        vecvalor[empleado - 1] = valorhora;
        vecextra[empleado - 1] = valorextra;


    }


    cout << "..............................................." << endl;
    cout << "Empleado: ";
    cin >> empleado;
    while( empleado != 0)
    {

        cout << "Dia(1 a 31): ";
        cin >> dia;
        cout << endl << "Total de horas trabajadas en el dia";
        cin >> horastrabajadas;
        cout << endl;

        if (horastrabajadas > 8)
        {
            horaextra = horastrabajadas - 8;
            hora = 8;
        }
        else
        {
            horaextra = 0;
            hora = horastrabajadas;
        }



        matvalordia[ empleado - 1][dia -1] = hora * vecvalor[empleado - 1] + horaextra * vecextra[empleado - 1];



        cout << "..............................................." << endl;
        cout << "Empleado: ";
        cin >> empleado;


    }


    for(int i = 0; i < cantemple; i++)
    {
        float acu = 0;

        for(int j = 0; j < 31; j++)
        {

            acu += matvalordia[i][j];



        }

        if (acu > 0)
        {


            cout << "El empleado " << i + 1 << " Tiene un sueldo de $" << acu << endl;

        }


    }






    return 0;
}
