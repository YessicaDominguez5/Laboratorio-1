/*La asociación tigrense de panaderos desea registrar la información de los productos que comercializó el día de ayer. Por cada producto registró:
Código de producto
Tipo (1 - Factura, 2 - Torta, 3 - Panificado)
Cantidad de kilogramos vendidos
Total recaudado ($)

La información no se encuentra agrupada ni ordenada. Para indicar el fin de la carga de datos se ingresa un código de producto negativo. Calcular e informar:
1 - El código de producto que haya recaudado la menor cantidad de dinero.
2 - El porcentaje de recaudación para cada tipo de producto.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int codigo, menorcodigo;
    char tipo;
    float kg, totalrecaudado, menorimp, acuimp = 0, acu1 = 0, acu2 = 0, acu3 = 0;
    bool bandera = false;

    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    while (codigo >= 0)
    {
        cout << "Ingrese el tipo(1- factura, 2- torta, 3- panificado): ";
        cin >> tipo;
        cout << "Ingrese los kilogramos vendidos: ";
        cin >> kg;
        cout << endl;
        cout << "Ingrese el total recaudado de ese codigo: ";
        cin >> totalrecaudado;
        cout << endl;
        acuimp += totalrecaudado;

        //punto 1
        if ( bandera == false)
        {
            menorimp = totalrecaudado;
            menorcodigo = codigo;
            bandera = true;

        }
        else
        {
            if (totalrecaudado < menorimp)
            {
                menorimp = totalrecaudado;
                menorcodigo = codigo;


            }



        }

        switch (tipo)
        {
        case '1':
            acu1 += totalrecaudado;
            break;
        case '2':
            acu2 += totalrecaudado;
            break;
        case '3':
            acu3 += totalrecaudado;
            break;





        }




        cout << "Ingrese el codigo del producto: ";
        cin >> codigo;
        cout << endl;

    }


    cout << "El codigo de producto que recaudo la menor cantidad de dinero fue: " << menorcodigo << endl;
    cout << "El porcentaje de recaudacion para el tipo 1 es: " << fixed << setprecision(2) << (acu1*100)/acuimp << "%" << endl;
    cout << "El porcentaje de recaudacion para el tipo 2 es: " << fixed << setprecision(2) <<(acu2*100)/acuimp << "%" << endl;
    cout << "El porcentaje de recaudacion para el tipo 3 es: " << fixed << setprecision(2) << (acu3*100)/acuimp << "%" << endl;

    // acuimp-----100
    //acu1-----x










    return 0;
}
