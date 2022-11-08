//Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero

#include <iostream>
using namespace std;
int main ()
{
    int i, num, contpos = 0, contneg = 0, contcero = 0;

    for ( i = 1; i <= 10; i++ )
    {

        cout << "Ingrese un numero: ";
        cin >> num;
        cout << endl;
        if ( num > 0)
        {
            contpos ++;
        }
        else if (num == 0)
        {
            contcero++;

        }
        else
        {
            contneg ++;
        }
    }
    cout << "Hay " << contpos << " numeros positivos." << endl;
    cout << "Hay " << contcero << " numeros iguales a cero." << endl;
    cout << "Hay " << contneg << " numeros negativos." << endl;


    return 0;
}
