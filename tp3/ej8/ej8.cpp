//Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
//El legajo del empleado con mayor sueldo


#include <iostream>
using namespace std;
int main ()
{
    int legajo, i, mayorlegajo;
    float sueldo, mayor = 0;

    for ( i = 1; i <= 10; i++)
    {

        cout << "Ingrese el legajo del empleado: ";
        cin >> legajo;
        cout << "Ingrese el sueldo: ";
        cin >> sueldo;
        cout << endl;

        if (sueldo > mayor)
        {

            mayor = sueldo;
            mayorlegajo = legajo;

        }

    }

cout << "El mayor sueldo es el del empleado de legajo " << mayorlegajo << endl;



    return 0;
}
