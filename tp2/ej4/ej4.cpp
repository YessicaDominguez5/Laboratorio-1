/*Hacer un programa para ingresar por teclado dos números
y luego informar por pantalla la diferencia absoluta entre ambos.
Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5.
Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.*/

#include <iostream>
using namespace std;
int main ()
{
    int num1, num2, dif;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << endl;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    cout << endl;
    if ( num1 > num2 )
    {
        dif = num1 - num2;
        cout << "La diferencia absoluta es " << dif << endl;
    }
    else
    {
        dif = num2 - num1;
        cout << "La diferencia absoluta es " << dif << endl;
    }






    return 0;
}
