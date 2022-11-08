/*Un negocio de perfumería efectúa descuentos según el importe de la venta.
- Si el importe es menor a $100 aplicar un descuento del 5%
- Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
- Si el importe es mayor a $500 aplicar un descuento del 15%
Hacer un programa donde se ingresa el importe original sin descuento
y que se informe por pantalla el importe con el descuento ya aplicado.*/

#include <iostream>
using namespace std;
int main ()
{

    float impsindes, impcondes;
    cout << "Ingrese el importe: ";
    cin >> impsindes;
    cout << endl;
    if (impsindes < 100)
    {
        impcondes = impsindes * 0.95;
        cout << "El importe a pagar es " << impcondes << endl;
    }

    else
    {
        if ( impsindes > 500)
        {
            impcondes = impsindes * 0.85;
            cout << "El importe a pagar es " << impcondes << endl;

        }
        else
        {
            impcondes = impsindes *0.90;
            cout << "El importe a pagar es " << impcondes << endl;


        }
    }


    return 0;
}
