/*Dada una lista de 10 números enteros. Calcular e informar el primer número par, el primer número primo.*/

#include <iostream>
using namespace std;
int main()
{
    int num, i, bandprimo = 0, banpar = 0,y, primo =0, par= 0;

    for( i=1; i <= 10 ; i++)
    {
        cout << "Ingresar numero: ";
        cin >> num;
        cout << endl;

        if (bandprimo == 0)
        {
            int conprimo = 0;
            for (y=1; y<= num; y++)
            {
                if (num % y == 0)
                {
                    conprimo++;
                }


            }
            if (conprimo == 2)
            {
                bandprimo = 1;
                primo  = num;
            }
        }
if (banpar == 0){
    if (num % 2 ==0){
        par= num;
        banpar = 1;
    }
}



    }
    cout << "primer primo: " << primo << endl;
    cout << "primer par: " << par << endl;


    return 0;
}
