#include <iostream>
using namespace std;
#include <string>



int main()
{
    string nombre, apellido;
    int legajo, i;
    char vec[7] {'A','B','C','D','E','F','G'};

    cout << "Ingrese legajo: ";
    cin >> legajo;
    cout << endl;
    cin.ignore(); // Cuando pones un cin y abajo un getline pones un ignore en el medio porque sino saltea al nombre y pasa al apellido
    cout << "ingrese nombre: ";
    getline(cin, nombre); // getline es para que cuando se ingresa un espacio. Ej: Yessica Natalia

    cout << endl;
    cout << "Ingrese apellido: ";
    getline(cin, apellido);

    cout << endl;

    cout << "su nombre es " << nombre;
    if (nombre == "YESSICA NATALIA" && apellido == "DOMINGUEZ")
    {
        cout << endl << "Soy yo!";
    }
    else
    {
        cout << endl << "Es otra persona";
    }
    cout << endl;

    nombre = apellido;
    cout << nombre << " - " << apellido << endl;

    return 0;
}
