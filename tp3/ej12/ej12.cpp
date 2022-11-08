/*Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados, aclarando cual es el máximo y cual el que le sigue.
Ejemplo: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -4*/

#include <iostream>
using namespace std;
int main () {
    int num = 0, i = 0, ban = 0, mayor =0 , aux =0, segmayor =0;

for(i = 1; i<=5; i++){
    cout << "ingresar numero: ";
    cin >> num;
    cout << endl;
    if ( ban == 0){
        mayor = num;
        ban ++;
        }
        else {

            if (num > mayor){
                    aux = mayor; //lo que antes tenia mayor
                    mayor = num;
                    segmayor = aux;

            }
            else if  ( segmayor == 0 || num > segmayor) { //porque esta inicializado en cero por eso si es la primera vez q pasa por ahi asignarle num
                segmayor = num;

            }

        }


}

cout << " El mayor es " << mayor << endl;
cout << "El segundo mayor es " << segmayor << endl;



return 0;
}
