//Hacer un programa donde se carguen 15 números enteros y luego muestre por pantalla el mínimo elemento del vector y además indique cuántas veces se repite el valor mínimo dentro del vector.

#include <iostream>
using namespace std;
#include <clocale>
int main()
{
    setlocale(LC_ALL,"spanish");
    int vec[15] {2,5,1,-6,8,-20,2,10,-20,3,-20,5,4,1,0}, i, mini = 0 ,cont=0;

    mini = vec[0];

    for(i = 1; i < 15; i ++)
    {

        if( vec[i] < mini)
        {

            mini = vec[i];
        }

    }
        for ( i= 0; i < 15; i++)
        {

            if (mini == vec[i])
            {

                cont++;

            }


    }
    cout << "El valor mínimo de la lista es " << mini << " y se repite " << cont << " veces." << endl;


    return 0;
}
