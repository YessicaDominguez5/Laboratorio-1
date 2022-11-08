/*Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales.
Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa persona y listarlo por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19. Ejemplo 3.
Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.*/


#include <iostream>
using namespace std;
int main ()
{
    int an, mn, dn, aa, ma, da, anhos;
    cout << "Ingrese el anho de nacimiento: ";
    cin >> an;
    cout << endl;
    cout << "Ingrese el mes de nacimiento: ";
    cin >> mn;
    cout << endl;
    cout << "Ingrese el dia de nacimiento: ";
    cin >> dn;
    cout << endl;
    cout << "Ingrese el anho actual: ";
    cin >> aa;
    cout << endl;
    cout << "Ingrese el mes actual: ";
    cin >> ma;
    cout << endl;
    cout << "Ingrese el dia actual: ";
    cin >> da;
    cout << endl;
    anhos = aa - an;
    if ( mn > ma) {
        anhos -= 1;
    }
    else { if (mn == ma && da < dn)   anhos -= 1;


    }

    cout << "La persona tiene " << anhos << " anhos" << endl;

    return 0;
}
