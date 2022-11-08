/*Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.*/

#include <iostream>
using namespace std;

int main (){
int a, b, c , tot;
float pa, pb, pc;
cout << "Ingrese la cantidad de alfajores vendidos de a: ";
cin >> a;
cout << endl;
cout << "Ingrese la cantidad de alfajores vendidos de b: ";
cin >> b;
cout << endl;
cout << "Ingrese la cantidad de alfajores vendidos de c: ";
cin >> c;
cout << endl;
tot = a + b + c;
pa = (a * 100) / (float) tot;
pb = (b * 100) / (float) tot;
pc = (c * 100) / (float) tot;

cout << " El porcentaje vendido de a es: " << pa << "%" << endl << endl;
cout << " El porcentaje vendido de b es: " << pb << "%" << endl << endl;
cout << " El porcentaje vendido de c es: " << pc << "%" << endl << endl;

return 0;
}
