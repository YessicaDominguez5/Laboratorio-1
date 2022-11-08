/*Una empresa transporta encomiendas entre Buenos Aires y Mendoza. Por cada encomienda se cobra un importe de acuerdo al peso de la misma, con la siguiente escala:
Kilos		    Importe
<= 10		     A
>10 y <=40	     B
>40		         C

Los camiones utilizados transportan un máximo de 200 kilos y son cargados a medida que llegan las encomiendas,partiendo en el momento en que una encomienda no puede ser cargada
en el camión por exceder los 200 kilos y se procede a colocar en otro camión que así comienza a ser cargado.
Los camiones a medida que se cargan se identifican con un número, partiendo del número uno (1). Confeccionar un programa para que:
a) Ingrese los valores de los tres importes A, B y C.
b) Ingrese el peso de cada encomienda. Para finalizar la carga de datos se ingresa una encomienda "ficticia", con peso negativo.
c) Por cada encomienda despachada se informe la siguiente información:
Nro. de Camión, Kg. Transportados e  Importe Cobrado
d) Informar la cantidad total de camiones y el total facturado.*/

#include <iostream>
using namespace std;
int main()
{
    float a, b, c, acuprecio = 0, acupreciototal = 0;
    int contcamion = 0,kilos, acuKilos = 0;


    cout << "Ingrese el importe de las encomiendas A (menor o iguales a 10 kilos): $";
    cin >> a;
    cout << endl;
    cout << "Ingrese el importe de las encomiendas B (mayores a 10 kilos y menores o iguales a 40): $";
    cin >> b;
    cout << endl;
    cout << "Ingrese el importe de las encomiendas C (mayores a 40 kilos): $";
    cin >> c;
    cout << endl;

    cout << "Ingrese el peso de la encomienda: ";
    cin >> kilos;
    cout << endl;

    while (kilos > 0)
    {
        acuKilos = 0;
        contcamion++;
        acuprecio = 0;

        while(acuKilos + kilos <= 200 && kilos > 0)
        {
            acuKilos += kilos;
            if( kilos <= 10)
            {
                acuprecio += a;

            }
            else if( kilos > 40)
            {
                acuprecio +=c;
            }
            else
            {
                acuprecio += b;
            }



            cout << "Ingrese el peso de la encomienda: ";
            cin >> kilos;
            cout << endl;



        }
        acupreciototal += acuprecio;
        cout << "* Nro de camion " << contcamion << endl << "*" << acuKilos << " kilos transportados" << endl << "* importe cobrado por ese camion es de $ " << acuprecio << endl;



    }



    cout << "* La cantidad total de camiones fueron " << contcamion << endl << "* El total facturado es $" << acupreciototal << endl;

    return 0;
}
