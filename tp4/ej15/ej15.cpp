/*Hacer un programa que contenga un menú con el siguiente formato:

Menú principal
-----------------------------
1 - Ingresar medida en metros
2 - Convertir a centímetros
3 - Convertir a kilómetros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa

Ingrese opción:

Al ingresar a la opción 1, nos pedirá una medida (float) en metros que con las siguientes opciones del menú podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo desee y sólo finalizará al ingresar a la opción 0.*/

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{

    float medida, cm, km, pul, pies;
    char menu =1;
    bool salir = false;

    cout << "--------------------------------" << endl;
    cout << "1 - Ingresar medida en metros" << endl;
    cout << "2 - Convertir a centimetros" << endl;
    cout << "3 - Convertir a kilometros" << endl;
    cout << "4 - Convertir a pulgadas" << endl;
    cout << "5 - Convertir a pies" << endl;
    cout << "0 - Salir del programa" << endl;
    cout << "--------------------------------" << endl;

    cout << endl << "Ingrese una opcion del menu: ";
    cin >> menu;
    cout << endl;
    while (!salir)
    {

        switch (menu)
        {
        case '1':
            cout << "Ingresar medida en metros: ";
            cin >> medida;
            break;
        case '2':
            cm =(float)medida*100;
            cout << fixed <<setprecision(2)<< cm << endl;
            break;
        case '3':
            km =(float)medida/1000;
            cout << fixed << setprecision(2) << km << endl;
            break;
        case '4':
            pul = (float)medida * 39.37;
            cout <<fixed << setprecision(2)<< pul << endl;
            break;
        case '5':
            pies =(float) medida * 3.281;
            cout << fixed << setprecision(2) << pies << endl;
            break;
        case '0':
            salir = true;
            break;
        default:
            cout << "Intente nuevamente.";
            break;
        }

        if(!salir)
        {
            cout << endl << "Ingrese una opcion del menu: ";
            cin >> menu;
            cout << endl;
        }

    }


    return 0;
}










