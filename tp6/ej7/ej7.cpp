/*Se ingresa por teclado en un vector de 10 elementos, 9 números todos distintos entre sí y ordenados de menor a mayor.
Se pide ingresar otro valor e insertarlo en el orden correspondiente y desplazar todos los elementos un lugar.
Ejemplo:
Vector → {1 3 4 5 6 7 10 12 16}
Número ingresado: 9
Vector → {1 3 4 5 6 7 9 10 12 16}*/

#include <iostream>
using namespace std;
int main()
{
    int num = 0, vec[10], i, j, num2 = 0, numAnt = 0;
    bool bandera = false;

    for(i=0; i < 9; i++)
    {

        cout << "Ingresar nro (en orden creciente): ";
        cin >> num;
        cout << endl;

        vec[i] = num;

    }

    cout << "Ingresar nro a acomodar: ";
    cin >> num2;
    cout << endl;

    int n = 0;
    while( bandera == false )
    {


        if ( num2 > vec[n] && num2 < vec[n + 1] )
        {

            bandera = true;

        } else if( num2 > 0 && num2 < vec[n] ) {

            bandera = true;
            n = -1;
        }

        n++;

    }



    if (bandera)
    {

        for (j = n; j < 10; j++ )
        {
            if(j == 9)
            {
                vec[j] = numAnt;
            }
            else
            {
                numAnt = vec[j];
                vec[j] = num2;
                num2 = numAnt;

            }
        }

    }

    for ( int x = 0; x<10; x++){
        cout << vec[x] <<endl;
    }





    return 0;
}

