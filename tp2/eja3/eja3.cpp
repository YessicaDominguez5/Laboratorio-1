/*Una granja dispone de 45 conejos blancos, 50 conejos negros, 40 marrones y 49 grises. Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:
Cantidad de conejos
Tipo de conejo (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
Cantidad total de conejos vendidos en total.
Cuántos conejos quedaron de cada tipo.
Los tipos de conejos que no se vendieron.

NOTA: Ninguna venta superará los 10 conejos.*/

#include <iostream>
using namespace std;
int main ()
{
    int cantidad = 0;
    int totalcantidad = 0;
    char tipo = 0;
    const int blancos = 45;
    const int negros = 50;
    const int marrones = 40;
    const int grises = 49;
    int blan = 0;
    int neg = 0;
    int marr = 0;
    int gris = 0;

    cout << "45 conejos blancos, 50 conejos negros, 40 marrones y 49 grises" << endl <<endl;
    cout << "Venta nro 1" <<endl;
    cout << "************"<< endl;
    cout << "Ingrese la cantidad de conejos vendidos: ";
    cin >> cantidad;
    cout << "Ingrese el tipo de conejo (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris): ";
    cin >> tipo;
    cout << endl <<endl;
    totalcantidad += cantidad;


    switch(tipo)
    {
    case '1':
    { blan += cantidad;
    }
    break;
    case '2':
    { neg += cantidad;
    }
    break;
    case '3':
    {marr += cantidad;

    }
    break;
    case '4':
    { gris += cantidad;

    }
    break;

    }
    cout << "Venta nro 2" << endl;
    cout << "************" << endl;
    cout << "Ingrese la cantidad de conejos vendidos: ";
    cin >> cantidad;
    cout << "Ingrese el tipo de conejo (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris): ";
    cin >> tipo;
    cout << endl << endl;
    totalcantidad += cantidad;

    switch(tipo)
    {
    case '1':
    { blan += cantidad;
    }
    break;
    case '2':
    { neg += cantidad;
    }
    break;
    case '3':
    {marr += cantidad;

    }
    break;
    case '4':
    { gris += cantidad;

    }
    break;

    }

    cout << "Venta nro 3" << endl;
    cout << "************" << endl << endl;
    cout << "Ingrese la cantidad de conejos vendidos: ";
    cin >> cantidad;
    cout << "Ingrese el tipo de conejo (1 - Blanco, 2 - Negro, 3- Marron, 4 - Gris): ";
    cin >> tipo;
    cout << endl << endl;
    totalcantidad += cantidad;

    switch(tipo)
    {
    case '1':
    { blan += cantidad;
    }
    break;
    case '2':
    { neg += cantidad;
    }
    break;
    case '3':
    {marr += cantidad;

    }
    break;
    case '4':
    { gris += cantidad;

    }
    break;

    }

cout << "* Cantidad total de conejos vendidos: " << totalcantidad << endl <<endl;
cout << "* Los conejos que quedaron blancos: " << blancos - blan << endl << endl;
cout << "* Los conejos que quedaron negros: " << negros - neg << endl << endl;
cout << "* Los conejos que quedaron marrones: " << marrones - marr << endl << endl;
cout << "* Los conejos que quedaron grises: " << grises - gris << endl << endl;
if (blan ==0){ cout << "* no se vendieron conejos blancos" << endl << endl;

}
if (neg ==0){ cout << "* no se vendieron conejos negros" << endl<< endl;

}
if (marr ==0){ cout << "* no se vendieron conejos marrones" << endl << endl;

}if (gris ==0){ cout << "* no se vendieron conejos grises" << endl << endl;

}
    return 0;
}
