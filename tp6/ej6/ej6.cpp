/*Se ingresa por teclado un vector de 10 elementos todos distintos entre sí. Luego eliminar el valor máximo y desplazar todos los elementos un lugar.
Ejemplo:
Vector → {1 3 9 1 4 6 2 0 5 7 }, quedará → {1 3 1 4 6 2 0 5 7}
Nota: No mostrar el último elemento del vector.*/


#include <iostream>
using namespace std;

#include <clocale>

int main()
{

    setlocale(LC_ALL,"spanish");

    int num, i, vec[10] = {}, mayor = vec[0];
    bool bandera;

    for( i = 0; i < 10; i++)
    {

        cout << "Ingresar numero: ";
        cin >> num;
        cout << endl;


        vec[i] = num;
    }

    for( i = 0; i < 10; i++)
    {

        if (vec[i] > mayor )
        {
            mayor = vec[i];
        }
    }


    for( i = 0; i < 9; i++)
    {
        if (vec[i] != mayor && bandera == false)
        {

            cout << vec[i] << endl;

        }
        else
        {

            bandera = true;


        }

        if (bandera == true)
        {

            vec[i] = vec[i + 1];

            cout << vec[i] << endl;

        }
    }



        return 0;
    }
