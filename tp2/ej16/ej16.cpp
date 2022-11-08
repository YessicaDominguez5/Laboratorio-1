/*Hacer un programa para ingresar por teclado cuatro números. Si los valores que se ingresaran están ordenados en forma creciente,
emitir el mensaje “Conjunto Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
Ejemplo 1: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
Ejemplo 2: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados. Ejemplo 3: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.*/

#include <iostream>
using namespace std;
int main ()
{
    int n1, n2, n3, n4;
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
    if ( n1 <= n2 && n2 <= n3 && n3 <= n4 )
    {
        cout << "Conjunto ordenado" << endl;
    }
    else
    {
        cout << "conjunto desordenado" << endl;
    }


    return 0;
}
