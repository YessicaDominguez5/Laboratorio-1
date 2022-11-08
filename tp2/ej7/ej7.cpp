/*Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria
si los tres son todos distintos entre sí, caso contrario no emitir nada.
 Ayuda: Si A es distinto de B y B es distinto de C, eso no signica que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.*/

 #include <iostream>
 using namespace std;
 int main () {
int a, b, c;
 cout << "Ingrese un numero: ";
 cin >> a;
 cout << endl;
 cout << "Ingrese un segundo numero: ";
 cin >> b;
 cout << endl;
 cout << "Ingrese un tercer numero: ";
 cin >> c;
 cout << endl;
 if ( a!=b && b!=c && a!=c) {
    cout << "Los numeros son todos distintos" << endl;

 }
 return 0;
 }
