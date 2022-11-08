#include <iostream>
#include <iomanip>

using namespace std;
#include <clocale>
int main()
{
    setlocale(LC_ALL,"spanish");
    int na, ter, cortes = 0, op = 0, opsube = 0, an = 0, ansube= 0, acucortes = 0, cfi = 0, diacam = 0, totcam = 0, sube = 0, acusube = 0;
    double ef = 0, acuef = 0, si = 0, deb = 0, ex = 0, osalidas = 0, fisico = 0, totentradas = 0, saldofinal = 0, diferencia = 0,acudeb = 0, acuex = 0, acusi = 0, aj = 0, efsaldos = 0, siproxdia = 0, cfiproxdia = 0;
    cout <<"------------------------------------------------------------------------" << endl;
    cout << "Ingrese numero de agencia: ";
    cin >> na;
    cout << endl << "Ingrese número de terminal: ";
    cin >> ter;
    cout <<"------------------------------------------------------------------------" << endl;
    cout << endl;
    while(ter != 0)
    {
        cout << "Ingrese saldo inicial: ";
        cin >> si;
        cout << endl;
        acusi += si;
        cout << endl << "Ingrese el monto del efectivo recaudado: ";
        cin >> ef;
        cout << endl;
        acuef += ef;
        cout << endl << "Ingrese el monto del débito: ";
        cin >> deb;
        cout << endl;
        acudeb += deb;
        cout << endl << "Ingrese el monto de las extracciones: ";
        cin >> ex;
        cout << endl;
        acuex += ex;
        cout << endl << "Ingrese el monto facturado de SUBE: ";
        cin >> sube;
        cout << endl;
        acusube += sube;
        cout << endl << "Ingrese el monto total de cortes: ";
        cin >> cortes;
        cout << endl;
        acucortes += cortes;
        cout << endl << "Ingrese otras salidas: ";
        cin >> osalidas;
        cout << endl;
        cout << endl << "Ingrese el físico de caja: ";
        cin >> fisico;
        cout << endl;
        cout << endl << "Ingrese cantidad de operaciones en siris: ";
        cin >> op;
        cout << endl;
        cout << endl << "Ingrese cantidad de operaciones de SUBE: ";
        cin >> opsube;
        cout << endl;
        cout << endl << "Ingrese cantidad de anulaciones en siris: ";
        cin >> an;
        cout << endl;
        cout << endl << "Ingrese cantidad de anulaciones de sube: ";
        cin >> ansube;
        cout << endl;
        totentradas = si + ef + deb + sube - ex;
        saldofinal = totentradas - cortes - deb - osalidas;
        diferencia = fisico - saldofinal;
        if ( diferencia > 0)
        {
            cout <<"-------------------------------------------------------" << endl;
            cout << endl << " Caja con sobrante de: " << fixed << setprecision(2) << diferencia << endl;
            cout <<"-------------------------------------------------------" << endl;
        }
        else if (diferencia < 0)
        {
            cout <<"-------------------------------------------------------" << endl;
            cout << endl << " Caja con faltante de: " << fixed << setprecision(2) << diferencia << endl;
            cout <<"-------------------------------------------------------" << endl;
        }
        else
        {
            cout <<"-------------------------------------------------------" << endl;
            cout << endl << "La caja no tiene diferencias";
            cout <<"-------------------------------------------------------" << endl;
        }

        cout << endl << "La cantidad total de operaciones es de " << op + opsube << " operaciones." << endl;
        cout << endl << "La cantidad total de anulaciones es de " << an + ansube << " operaciones." << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "Ingrese número de terminal(si no existen más terminales ingrese 0 cero): " << endl;
        cin >> ter;
        cout << "---------------------------------------------------------------------" << endl;


    }
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Ingrese los ajustes(no ingresar sobrantes, solamente los que modifican el saldo): " << endl;
    cin >> aj;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Ingrese la caja fuerte de inicio: ";
    cin >> cfi;
    cout << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Ingrese lo entregado al camión en el día: ";
    cin >> diacam;
    cout << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Ingrese lo entregado al camión en total: ";
    cin >> totcam;
    cout << endl;
    cout << "---------------------------------------------------------------------" << endl;

    efsaldos = acuef - acuex;

    cout << "saldo inicial: " << acusi << endl << "caja fuerte de inicio: " << cfi << endl << "efectivo: " << efsaldos << endl << "débito: " << acudeb << endl << "sube: " << acusube << endl << "extracciones: " << acuex << endl << "cortes: " << acucortes << endl << "efectivo dia camion: " << diacam << endl << "total camion: " << totcam << endl << "ajustes: " << aj << endl;

    siproxdia = acusi + efsaldos + acusube + aj - acucortes;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "El saldo de inicio del día siguiente es de: " << siproxdia << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "La caja fuerte de inicio del proximo día es de: " << acucortes - diacam << endl;
    cout << "---------------------------------------------------------------------";

    return 0;
}
