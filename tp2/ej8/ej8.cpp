/*Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.*/

#include <iostream>
using namespace std;
int main ()
{
    float la, lb, lc;
    cout << "Ingrese la longitud del lado A del triangulo: ";
    cin >> la;
    cout << endl;
    cout << "Ingrese la longitud del lado B del triangulo: ";
    cin >> lb;
    cout << endl;
    cout << "Ingrese la longitud del lado C del triangulo: ";
    cin >> lc;
    cout << endl;
    if (la == lb && lb == lc)
    {
        cout << "El triangulo es Equilatero" << endl;
    }
    else
    {
        if ( la != lb && lb != lc && la!= lc )
            cout <<  "El triangulo es Escaleno" << endl;

        else
        { cout << "El triangulo es Isosceles" << endl;
        }


    }


    return 0;
}
