//Hacer un programa donde se carguen 15 números enteros y luego le solicite al usuario un número e indique si el mismo pertenece a la lista cargada anteriormente.

#include <iostream>
using namespace std;
#include<clocale>
int main(){
setlocale(LC_ALL,"spanish");

int vec[15]{5,3,4,-8,6,0,1,84,33,10,46,55,65,100,20}, i, num;

cout << "Ingrese un número: ";
cin >> num;
cout << endl;

for(i = 0; i < 15; i++){

    if(vec[i] == num){


        cout << "pertenece a la lista" << endl;


    }

}




return 0;
}
