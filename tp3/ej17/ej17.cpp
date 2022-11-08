/*Una estación meteorológica registró una muestra climática de los últimos 15 días. Por cada día registró:
Número de día (entero)
Temperatura (float)
Milímetros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada día. La información se encuentra ordenada por día. Se pide calcular e informar:
El número de día que se haya registrado la temperatura máxima.
La amplitud térmica de todo el período.
La cantidad de días con neblina.
Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia. Mostrar "Quincena húmeda" si llovió al menos un tercio de los días. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.*/


#include <iostream>
using namespace std;
int main()
{
    int i, dia, conneblina = 0, conlluvia = 0;
    float tempe, mili, visi, maxi = 0, mini = 0;

    for ( i=1; i<=15; i++)
    {
        cout << "dia " << i << endl;

        cout << "Ingresar temperatura: ";
        cin >> tempe;
        cout << endl << "Ingresar milimetros de lluvia: ";
        cin >> mili;
        cout << endl << "Ingresar visibilidad: ";
        cin >> visi;
        cout << endl;

        if (i == 1)
        {

            maxi = tempe;
            dia = i;
            mini = tempe;

        }
        else if( tempe > maxi )
        {
            maxi = tempe;
            dia = i;
        }
        if (tempe < mini)
        {

            mini = tempe;

        }

        if ( visi < 2)
        {
            conneblina++;
        }
        if ( mili > 0)
        {

            conlluvia++;
        }



    }



    cout << "El numero de dia que se registro la temperatura máxima fue: " << dia << endl;
    cout << "La amplitud térmica de todo el período fue: " << maxi - mini << endl;
    cout << "La cantidad de días con neblina fue: " << conneblina << endl;
    if (conlluvia < 5 )
    {
        cout << "Quincena seca" << endl;
    }
    else if (conlluvia >= 5 && conlluvia < 8)
    {
        cout << "Quincena humeda" << endl;
    }
    else
    {
        cout << "Quincena lluviosa" << endl;
    }
    return 0;
}
