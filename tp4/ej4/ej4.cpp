/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo de los n�meros pares.
Ejemplo: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listar� M�ximo 36.
Ejemplo: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listar� M�ximo 4.
Ejemplo: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listar� M�ximo 0*/

#include <iostream>
using namespace std;
int main () {
int num, maxipar;
bool bprimer = 0;
cout << "Ingrese un numero: ";
cin >> num;
while (num != 0){
    if ( bprimer == 0 ){
        if( num > 0 ){
            if(num % 2 == 0){
                    maxipar = num;
                    bprimer = 1;
            } else { maxipar = 0;
                bprimer = 1;}
        } else {maxipar = 0;
            bprimer = 1;}


    } else { if (num > maxipar && num % 2 == 0 ){
        maxipar = num;
    }
    }

cout << "Ingrese otro numero: ";
cin >> num;


}

cout << "El maximo par es " << maxipar << endl;

return 0;
}
