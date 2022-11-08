/*Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los siguientes costos:
Costo de alquiler de $10000
Costo por caramelo producido de $0.5
Costo por mantenimiento cada 1000 caramelos de $5000

Dados el presupuesto inicial y la cantidad de caramelos a producir el primer mes, informar:
"El presupuesto es suficiente para cubrir los costos de $XXXX"
"El presupuesto no es suficiente, necesita un crédito de $XXXX"*/

#include <iostream>
using namespace std;
int main (){
float presupuesto;
float costototal;
int caramelos;
const int alquiler = 10000;
const int mantenimiento = 5;
cout << "Ingrese el presupuesto inicial de la empresa: ";
cin >> presupuesto;
cout << endl;
cout << "Ingrese la cantidad de caramelos a producir en 1 mes: ";
cin >> caramelos;
cout << endl;
costototal = 10000 + ( caramelos * 0.5 ) + ( mantenimiento * 5);
if( costototal < presupuesto){ cout << "El presupuesto es suficiente para cubrir los costos de $" << costototal << endl; }
if( costototal > presupuesto){ cout << "El presupuesto no es suficiente para cubrir los costos de $" << costototal << endl; }



return 0;
}
