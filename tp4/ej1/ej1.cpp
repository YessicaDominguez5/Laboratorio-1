//Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.
//Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.

#include <iostream>
using namespace std;
int main ()
{
    int num, conpos = 0, conneg = 0;
                                  cout << "Ingrese un numero: ";
    cin >> num;
    cout << endl;
    while(num != 0)
    {
        if(num > 0)
        {
            conpos++;
        }
        else
        {
            conneg++;
        }
        cout << "Ingrese otro numero: ";
        cin >> num;
        cout << endl;
    }

cout << "* Se ingresaron " << conpos << " numeros positivos" << endl;
cout << "* Se ingresaron " << conneg << " numeros negativos" << endl;
cout << "* y se ingreso un 0 para finalizar el programa." << endl;



    return 0;
}
