/*Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
* El sueldo máximo.
* El sueldo mínimo.
* El sueldo promedio.
* Cantidad de sueldos mayores a $50000.*/

#include <iostream>
using namespace std;
int main ()
{
    int i, contador = 0, bandera = 0 ;
    float sueldo, maxi = 0, mini, acu = 0;

    for ( i = 1; i <= 10; i++)
    {
        cout << "Ingrese el sueldo del empleado: ";
        cin >> sueldo;
        cout << endl;
        if (sueldo > 50000)
        {
            contador ++;
        }
        acu += sueldo;
        if ( sueldo > maxi)
        {
            maxi = sueldo;

        }
        if ( bandera == 0){
                mini = sueldo;
                bandera++;

        }
        else {
           if(sueldo < mini) {
            mini = sueldo;

           }
        }

    }

    cout << "El sueldo maximo es de " << maxi << endl;
    cout << "El sueldo minimo es de " << mini << endl;
    cout << "El sueldo promedio es de " << acu/10 << endl;
    cout << "La cantidad de sueldos mayores a $50000 son " << contador << endl;



    return 0;
}
