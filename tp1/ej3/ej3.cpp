
/*Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto vendido.
Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.*/



#include <iostream>

using namespace std;

int main () {
int auven, sueldo;
cout << "Ingrese la cantidad de autos vendida por el empleado: ";
cin >> auven;
sueldo = (2000*auven)+ 15000;
cout << "El sueldo total del vendedor es: " << sueldo;

return 0;
}
