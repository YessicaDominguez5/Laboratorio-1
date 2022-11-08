/*Hacer un programa en el que se ingresen la edad y altura de 5 personas. Luego, calcular e informar:
La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
El promedio de altura de las personas mayores a 30 años.
La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
La cantidad de personas cuya edad sea de 20, 30 o 40 años*/

#include <iostream>
using namespace std;
int main ()
{
    int edad1 = 0, edad2 = 0, edad3 = 0, edad4 = 0, edad5 = 0, contador = 0, conentre = 0, condec = 0, conalt =0;
    float altura1 =0, altura2 =0, altura3 = 0, altura4 = 0, altura5 = 0, acu = 0, promedio = 0;
    cout << "Ingrese la edad de la persona 1: ";
    cin >> edad1;
    cout << endl;
    cout << "Ingrese la altura de la persona 1: ";
    cin >> altura1;
    cout << endl;
    if( edad1 > 30 && altura1 > 1.8 )
    {
        contador += 1;
    }
    if ( edad1 > 30)
    {
        acu += altura1;
        conalt++;
    }
    if (altura1 >= 1.7 && altura1 <= 1.8)
    {
        conentre++;
    }
    if ( edad1 == 20|| edad1 == 30 || edad1 ==40 )
    {
        condec++;
    }
    cout << "Ingrese la edad de la persona 2: ";
    cin >> edad2;
    cout << endl;
    cout << "Ingrese la altura de la persona 2: ";
    cin >> altura2;
    cout << endl;
    if( edad2 > 30 && altura2 > 1.8 )
    {
        contador += 1;
    }
    if ( edad2 > 30)
    {
        acu += altura2;
        conalt++;
    }
    if (altura2 >= 1.7 && altura2 <= 1.8)
    {
        conentre++;
    }
    if ( edad2 == 20|| edad2 == 30 || edad2 ==40 )
    {
        condec++;
    }
    cout << "Ingrese la edad de la persona 3: ";
    cin >> edad3;
    cout << endl;
    cout << "Ingrese la altura de la persona 3: ";
    cin >> altura3;
    cout << endl;
    if( edad3 > 30 && altura3 > 1.8 )
    {
        contador += 1;
    }
    if ( edad3 > 30)
    {
        acu += altura3;
        conalt++;
    }
    if (altura3 >= 1.7 && altura3 <= 1.8)
    {
        conentre++;
    }
    if ( edad3 == 20|| edad3 == 30 || edad3 ==40 )
    {
        condec++;
    }
    cout << "Ingrese la edad de la persona 4: ";
    cin >> edad4;
    cout << endl;
    cout << "Ingrese la altura de la persona 4: ";
    cin >> altura4;
    cout << endl;
    if( edad4 > 30 && altura4 > 1.8 )
    {
        contador += 1;
    }
    if ( edad4 > 30)
    {
        acu += altura4;
        conalt++;
    }
    if (altura4 >= 1.7 && altura4 <= 1.8)
    {
        conentre++;
    }
    if ( edad4 == 20|| edad4 == 30 || edad4 ==40 )
    {
        condec++;
    }
    cout << "Ingrese la edad de la persona 5: ";
    cin >> edad5;
    cout << endl;
    cout << "Ingrese la altura de la persona 5: ";
    cin >> altura5;
    cout << endl;
    if( edad5 > 30 && altura5 > 1.8 )
    {
        contador += 1;
    }
    if ( edad5 > 30)
    {
        acu += altura5;
        conalt++;
    }
    if (altura5 >= 1.7 && altura5 <= 1.8)
    {
        conentre++;
    }
    if ( edad5 == 20|| edad5 == 30 || edad5 ==40 )
    {
        condec++;
    }
    cout << "La cantidad de personas mayores a 30 anios que midan mas de 1.8 metros son " << contador << endl;
    promedio = (acu /conalt);
    cout << "El promedio de altura de las personas mayores a 30 años es de " << promedio << endl;
    cout << "La cantidad de personas con altura entre 1.7 y 1.8 son " << conentre << endl;
    cout << "La cantidad de personas cuya edad es 20, 30 o 40 años son " << condec << endl;






    return 0;
}
