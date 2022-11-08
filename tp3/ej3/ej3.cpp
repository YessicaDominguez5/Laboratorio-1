//Hacer un programa para que el usuario ingrese un número positivo y que luego se muestren por pantalla los números entre el 1 y el número ingresado por el usuario.
//Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.

#include <iostream>
using namespace std;
int main(){
int i, num;
cout << "Ingrese el numero: ";
cin >> num;
for ( i = 2; i < num; i++){
    cout << i << endl;

}

return 0;
}
