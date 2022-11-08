/* La bolsa de comercio de la ciudad de Bs As brinda la informaci�n de la cotizaci�n de algunas acciones de la semana pasada. Por c/ acci�n se tiene 5 registros de cotizaci�n.
Cada cotizaci�n registra la siguiente informaci�n:

-c�digo de acci�n (entero)
-precio apertura (float)
-precio cierre (float)
volumen de venta (entero)

Los datos se encuentran agrupados por c�digo de acci�n. Hay 5 cotizaciones por cada acci�n.El fin de los datos se indica con c�digo de acci�n igual a 0.

Se pide calcular e informar:
A) Por cada acci�n,el promedio de volumen de venta.
B) La cantidad de acciones que haya registrado todas sus cotizaciones en alza. Es decir, El precio de cierre sea mayor al precio de apertura.
C) La acci�n que m�s haya incrementado su valor en una cotizaci�n en particular. Es decir, la diferencia entre el precio de cierre y precio de apertura m�s grande.
D) La cantidad de cotizaciones en las que el precio no vari�. Es decir el precio de apertura es igual al precio de cierre.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int codigo, i, voldeventa, acuvol = 0, conalza = 0, conalzaacciones = 0, mayoraccion, contnovario = 0;
    float precioAper, precioCierre, mayorincremento, mayordiferencia = 0, diferencia;


    cout << "Ingrese codigo de accion: ";
    cin >> codigo;
    cout << endl;

    while(codigo != 0)
    {
        acuvol = 0;

        conalza = 0;

        for (i = 1; i <= 5; i++)
        {

            cout << "Ingrese el precio de apertura: $";
            cin >> precioAper;
            cout << endl << "Ingrese precio de cierre: $";
            cin >> precioCierre;
            cout << endl << "Ingrese volumen de venta: ";
            cin >> voldeventa;
            cout << endl;
            //punto A
            acuvol += voldeventa;
            //punto B
            if(precioCierre > precioAper)
            {

                conalza++;


            }
            // Punto C
            diferencia = precioCierre - precioAper;
            if(diferencia > mayordiferencia)
            {

                mayordiferencia = diferencia;
                mayoraccion = codigo;
            }



        //Punto D
        if (precioAper == precioCierre)
        {
            contnovario++;
        }
        }







    //punto A
    cout << "El promedio de volumen de venta de la accion " << codigo << " es " << fixed << setprecision(2) << (float)acuvol/5 << endl;

    //punto B
    if (conalza == 5)
    {
        conalzaacciones ++;
    }



    cout << "Ingrese codigo de accion: ";
    cin >> codigo;
    cout << endl;



}

//punto B
cout << "La cantidad de acciones que registraron sus cotizaciones en alza son: " << conalzaacciones << endl;

//punto C

if (mayordiferencia > 0)
{
    cout << "La accion que mas incremento su valor en una cotizacion fue: " << mayoraccion << endl;
}
cout << "La cantidad de cotizaciones en las que el precio no vario fueron: " << contnovario << endl;





return 0;
}
