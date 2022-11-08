/*Cargar un conjunto de 100 números reales y formar con los valores positivos un vector llamado pos y con los valores negativos un vector llamado nega.
Mostrar por pantalla la cantidad de elementos que contiene cada vector y luego cada uno de los vectores. Sólo deben utilizarse dos vectores en el programa: pos y nega.*/

#include <iostream>
using namespace std;

#include <clocale>
int main(){

setlocale(LC_ALL,"spanish");

int num, i, pos[100]={}, neg[100] = {}, contpos = 0, contneg = 0;

for ( i = 0; i < 100; i++){

    cout << "Ingresar numero: ";
    cin >> num;
    cout << endl;

    if (num > 0){

        pos[contpos] = num;
        contpos++;

    } else if(num < 0){

    neg[contneg] = num;
    contneg++;


    }



}

cout << "Se ingresaron " << contpos << " numeros positivos y " << contneg << " numeros negativos." << endl;



return 0;
}
