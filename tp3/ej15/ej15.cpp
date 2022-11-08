/*Hacer un programa para ingresar un número positivo y calcular e informar si el mismo es un número primo.
Recordar que un número primo es un número natural que tiene exactamente dos divisores.*/

#include <iostream>
using namespace std;
int main (){
 int num, i, contador = 0;
 cout << "Ingresar numero: ";
 cin >> num;
 cout << endl;
 for (i = 1; i <= num; i++){
    if (num % i == 0){
        contador ++;
    }

 }
if (contador == 2){
    cout << "Es primo" << endl;

}
else { cout << "No es primo" << endl;}



return 0;
}
