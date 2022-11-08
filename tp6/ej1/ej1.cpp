/*Hacer un programa que le pida al usuario una lista de 10 números enteros y luego de ingresarlos muestre cuáles de ellos fueron positivos.*/

#include <iostream>
using namespace std;
int main()
{
    int vec[9], i, num;

    cout << "ingrese la lista de 10 numeros: " << endl;

    for (i = 0; i < 10; i++)
    {

        cin >> num;
        vec[i] = num;


    }

    for (i = 0; i < 10; i++)
    {

        if( vec[i] > 0)
        {

            cout << "positivo: " << vec[i] << endl;



        }


    }


    return 0;
}



