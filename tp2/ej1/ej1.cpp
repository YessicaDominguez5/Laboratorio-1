/*Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.*/

#include <iostream>
using namespace std;


int main() {
    float num;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << endl;
    if (num > 0){
cout << "Es positivo" << endl;
        }
        else {
                if(num < 0){
                    cout << "Es Negativo" << endl;

                    }
       else {
        cout << "Es cero" << endl;


       }

}








return 0;
}





