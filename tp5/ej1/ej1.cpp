/*En una empresa los empleados cobran un sueldo según la categoría a la que pertenecen. Son 50 empleados y los sueldos son:

Categoría 1: $38000
Categoría 2: $70000
Categoría 3: $105000

Al sueldo se le suma además $ 1200 por cada año trabajado. Para cada empleado se tienen los siguientes datos:
- Categoría (1 a 3)
- Antigüedad (entero)

Hay un registro por cada empleado. La información no está agrupada ni ordenada. Se pide calcular e informar:
a) ¿Cuantos empleados hay para cada categoría?
b) Total de sueldos (en $) pagados para cada categoría.
c) Sueldo Promedio.
d) ¿Cual fue el sueldo máximo y a que categoría pertenece?*/


#include <iostream>
using namespace std;
int main()
{
    float sueldo, sueldototal, acu1 = 0, acu2 = 0, acu3 = 0, maxi = 0;
    int i, antiguedad, cont1 = 0, cont2 = 0, cont3 = 0;
    char categoria, maxicategoria;
    bool band = false;
    const int empleados = 50;

    for(i = 1; i<= empleados; i++)
    {
        cout << "Empleado: " << i<< endl;
        cout << "Ingrese la antiguedad: ";
        cin >> antiguedad;
        cout << endl;
        cout << "Ingrese la categoria(1 2 3): ";
        cin >> categoria;
        cout << endl;

        switch (categoria)
        {
        case '1':
            sueldo = 38000;
            cont1++;
            sueldototal = sueldo + (antiguedad * 1200);
            acu1+= sueldototal;
            break;
        case '2':
            sueldo = 70000;
            cont2++;
            sueldototal = sueldo + (antiguedad * 1200);
            acu2+= sueldototal;
            break;
        case '3':
            sueldo = 105000;
            cont3++;
            sueldototal = sueldo + (antiguedad * 1200);
            acu3+= sueldototal;
            break;

        }



        if (band == false)
        {
            maxi = sueldototal;
            maxicategoria = categoria;
            band = true;



        }
        else
        {
            if(sueldototal >= maxi)
                maxi = sueldototal;
            maxicategoria = categoria;


        }




    }


    cout << "Los empleados de la categoria 1 son: " << cont1 << endl;
    cout << "Los empleados de la categoria 2 son: " << cont2 << endl;
    cout << "Los empleados de la categoria 3 son: " << cont3 << endl;
    cout << "El total pagado en sueldos para la categoria 1 es de: " << acu1 << endl;
    cout << "El total pagado en sueldos para la categoria 2 es de: " << acu2 << endl;
    cout << "El total pagado en sueldos para la categoria 3 es de: " << acu3 << endl;
    cout << "El promedio es: " << (acu1 + acu2 + acu3)/ empleados << endl;
    cout << "El sueldo maximo es de: $" << maxi << " que pertenece a la categoria: " << maxicategoria << endl;




    return 0;
}


