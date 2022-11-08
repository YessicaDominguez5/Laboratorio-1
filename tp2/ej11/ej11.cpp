//Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos.

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, n4, n5, contador;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << endl;
    cout << "Ingrese un segundo numero: ";
    cin >> n2;
    cout << endl;
    cout << "Ingrese un tercer numero: ";
    cin >> n3;
    cout << endl;
    cout << "Ingrese un cuarto numero: ";
    cin >> n4;
    cout << endl;
    cout << "Ingrese un quinto numero: ";
    cin >> n5;
    cout << endl;
    contador = 0;
    if (n1 > 0)
    {
        contador += 1;
    }
    if ( n2 > 0 )
    {
        contador += 1;
    }
    if ( n3 > 0 )
    {
        contador += 1;
    }
    if ( n4 > 0 )
    {
        contador += 1;
    }
    if ( n5 > 0 )
    {
        contador += 1;
    }

    cout << "Hay " << contador << " numeros positivos." << endl;

    return 0;
}
