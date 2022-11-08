/*El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:

Nombre-----Tipo-----Valor hora
C/C++......'C'........$ 2500
C#.........'#'........$ 2100
Python.....'P'........$ 1400
Go.........'G'........$ 2000


Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.

Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool).*/

#include <iostream>
using namespace std;
int main ()
{
    int horas;
    float precio;
    char tipo;
    bool urgente;

    cout << "Ingrese el lenguaje: ";
    cin >> tipo;
    tipo = toupper(tipo);
    cout << endl;
    cout << "Ingrese la cantidad de horas: ";
    cin >> horas;
    cout << endl;
    cout << "Es urgente? (1 si /0 no)" << endl;
    cin >> urgente;

    switch (tipo)
    {
    case 'C':
    {
        precio = horas * 2500;
    }
    break;
    case '#':
    {
        precio = horas * 2100;
    }
    break;
    case 'P':
    {
        precio = horas * 1400;
    }
    break;
    case 'G':
    {
        precio = horas * 2000;
    }
    break;
    default :
    {
        cout << " proyecto invalido";
        return 0;

    }
    break;
    }
    if (urgente == 1 )
    {
        precio = precio * 2.20;

    }

    cout << "El precio es : " << precio << endl;



    return 0;
}
