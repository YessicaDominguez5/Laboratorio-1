/* Un laboratorio de análisis químico de agua desea registrar la información de los análisis que realizó el día de ayer.
Cada registro de análisis de agua contiene la siguiente información:

* ID protocolo (entero)
* Nivel de sodio en mg/l (entero)
* Nivel de platino en mg/l (float)
* Determinación de ph (float)
* litros de la muestra (float)

Para determinar si el agua es potable o no, se rigen ciertos parámetros que se detallan a continuación:

ìtem          desde       hasta
....................................
sodio         0 mg/l      150 mg/l
....................................
platino       0,2 mg/l    12 mg/l
....................................
ph              6,5          8,5
....................................

El fin de los datos se indica ingresando un ID de protocolo igual a 0.
Se pide calcular e informar:

A) La cantidad de protocolos que se encuentran dentro de los parámetros aceptables para considerarla potable. Es decir, todos los ítems que están dentro de los rangos establecidos.
B) El ID protocolo que haya registrado la determinación de ph más alta.Indicar ID protocolo y nivel de ph.
C) El promedio de litros de muestra entre todos los protocolos.*/


#include <iostream>
using namespace std;
int main()
{
    int id, sodio, conpotable = 0, maxid, conid = 0;
    float platino, ph, litros, maxph = 0, aculitros = 0;


    cout << "Ingrese el ID protocolo: ";
    cin >> id;
    cout << endl;
    while (id != 0)
    {

        cout << "Nivel de sodio: ";
        cin >> sodio;
        cout << endl << "Nivel de platino: ";
        cin >> platino;
        cout << endl << "ph: ";
        cin >> ph;
        cout << endl << "Litros de agua de la muestra: ";
        cin >> litros;
        cout << endl;
        //punto a
        if( (sodio >= 0 && sodio <= 150) && (platino >= 0.2 && platino <= 12) && (ph >= 6.5 && ph <= 8.5))
        {

            conpotable ++;

        }
        //punto b
        if (ph > maxph){

            maxph = ph;
            maxid = id;

        }

    //punto c
    aculitros += litros;
    conid ++;









        cout << "Ingrese el ID protocolo: ";
        cin >> id;
        cout << endl;

    }


//punto a
cout << "La cantidad de protocolos que se consideran potables son: " << conpotable << endl << endl;
cout << "El ID protocolo que registro la determinacion de ph mas alta fue el id: " << maxid << " con nivel de ph: " << maxph << endl << endl;
cout << "El promedio de litros de muestra entre todos los protocolos es: " << (float)aculitros/conid << endl << endl;








    return 0;
}
