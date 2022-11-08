/*Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
Legajo del estudiante (entero)
Código de materia (entero)
Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000.  Calcular e informar:
La nota promedio entre todos los estudiantes.
El legajo del estudiante con menor nota.
La cantidad de exámenes rendidos para la materia 10.
El porcentaje de aprobados y no aprobados.

NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.*/

#include<iostream>
using namespace std;
int main()
{
    int legajo, codigo, contestudiantes= 0, acunota = 0, legajominimo, contnota = 0, contaprobados = 0, contdesaprobados = 0;
    float nota, notaminima;
    bool band = false;
    cout << "Ingrese el legajo del estudiante: ";
    cin >> legajo;
    cout << endl;
    cout << "Ingrese el codigo de la materia: ";
    cin >> codigo;
    cout << endl << "Ingrese la nota: ";
    cin >> nota;
    cout << endl;
    while(legajo < 30000)
    {
        contestudiantes++;
        acunota += nota;
        if(band == false)
        {
            notaminima = nota;
            legajominimo = legajo;
            band = true;
        }
        else
        {
            if (nota < notaminima)
            {
                notaminima = nota;
                legajominimo = legajo;

            }


        }
        if (codigo == 10)
        {
            contnota++;



        }
        if (nota >= 6 )
        {

            contaprobados++;
        }
        else
        {
            contdesaprobados++;
        }




        cout << "Ingrese el legajo del estudiante: ";
        cin >> legajo;
        cout << endl;

        if (legajo < 30000)
        {
            cout << "Ingrese el codigo de la materia: ";
            cin >> codigo;
            cout<< endl;
            cout << "Ingrese la nota: ";
            cin >> nota;
            cout << endl;
        }



    }

    cout << "El promedio es de " <<(float)acunota/contestudiantes << endl;
    cout << "La nota minima fue del estudiante " <<legajominimo << endl;
    cout << "La cantidad de examenes para la materia 10 fueron: " << contnota << endl;

    cout << "El promedio de aprobados es de: " <<(contaprobados * 100)/contestudiantes << "%"<< endl;
    cout << "El promedio de desaprobados es de: " <<(contdesaprobados * 100)/contestudiantes << "%"<< endl;






    return 0;
}





