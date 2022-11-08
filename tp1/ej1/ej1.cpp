/*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.*/


#include <iostream>
using namespace std;

int main() {
float horas;
float valor;
float sueldo;
cout << "Ingrese la cantidad de horas trabajadas" << endl;
cin >> horas;
cout << "Ingrese el valor por hora" << endl;
cin >> valor;
sueldo = horas*valor;
cout << " El sueldo que corresponde es: " << sueldo;
return 0;
}
