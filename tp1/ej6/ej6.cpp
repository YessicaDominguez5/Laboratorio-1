/*Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes.
El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.*/

#include <iostream>
using namespace std;

int main () {
float rpri,rseg,rter,rcuar, tot, prom, ps1, ps2, ps3, ps4;
cout << "Ingrese la recaudacion de la primer semana:$ ";
cin >> rpri;
cout << endl;
cout << "Ingrese la recaudacion de la segunda semana:$ ";
cin >> rseg;
cout << endl;
cout << "Ingrese la recaudacion de la tercer semana:$ ";
cin >> rter;
cout << endl;
cout << "Ingrese la recaudacion de la cuarta semana:$ ";
cin >> rcuar;
cout << endl;
tot = rpri + rseg + rter + rcuar;
prom = tot / 4;
cout << "La recaudacion promedio es:$ " << prom << endl <<endl;
ps1 = (rpri * 100)/tot;
ps2 = (rseg * 100)/tot;
ps3 = (rter * 100)/tot;
ps4 = (rcuar * 100)/tot;
cout << "El porcentaje de la primer semana es: " << ps1 << "%" << endl <<endl;
cout << "El porcentaje de la segunda semana es: " << ps2 << "%" << endl <<endl;
cout << "El porcentaje de la tercer semana es: " << ps3 << "%" << endl <<endl;
cout << "El porcentaje de la cuarta semana es: " << ps4 << "%" << endl <<endl;



return 0;
}
