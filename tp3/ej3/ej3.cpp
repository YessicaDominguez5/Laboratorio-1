//Hacer un programa para que el usuario ingrese un n�mero positivo y que luego se muestren por pantalla los n�meros entre el 1 y el n�mero ingresado por el usuario.
//Ejemplo. Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.

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
