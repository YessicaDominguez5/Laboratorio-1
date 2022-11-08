/*Un restaurant registró la información de todas las comandas atendidas la noche anterior por sus mozos. Por cada comanda se registró:
Número de comanda
Número de mozo (entero)
Tipo de plato (1 - Entrada, 2 - Plato Principal, 3 - Postre)
Importe (float)

La información se encuentra agrupada por Número de mozo. Cada mozo atendió diez comandas. Para indicar el fin de la carga de datos se registra un Número de mozo negativo.
Calcular e informar:
1 - Por cada mozo, la cantidad de platos de cada tipo.
2 - El número de mozo que haya atendido el Plato Principal de menor importe.
3 - El importe promedio por comanda (entre todas las comandas).

NOTA: Una comanda es un servicio de mesa (pedido) atendido por un mozo en un restaurant.*/


#include<iostream>

using namespace std;

int main()
{
    int nromozo, i, mozomenorimp, contcomandas = 0;
    char plato;
    float importe, menorimp, acuimporte = 0;
    bool banmenorimp = false;

    cout << "Ingrese el nro de mozo: ";
    cin >> nromozo;
    cout << endl;
    while(nromozo >= 0)
    {
        int contentrada = 0;
        int contpprin = 0;
        int contpostre = 0;


        for(i = 1; i <= 10; i++)
        {
            contcomandas++;
            cout <<"-----------------------------------" << endl;
            cout << "Comanda nro " << i << endl;
            cout <<"-----------------------------------" << endl;
            cout << "Nro de mozo: " << nromozo << endl;
            cout <<"-----------------------------------" << endl;
            cout << "Ingrese el tipo de plato(1 para entrada, 2 para plato principal, 3 para postre): ";
            cin >> plato;
            switch (plato)
            {
            case '1':
                cout <<"-----------------------------------" << endl;
                cout << "Entrada" << endl;
                cout <<"-----------------------------------" << endl;
                cout <<"Ingrese el importe abonado: ";
                cin >> importe;
                cout << endl;
                acuimporte += importe;
                contentrada++;
                break;

            case '2':
                cout <<"-----------------------------------" << endl;
                cout << "plato principal" << endl;
                cout <<"-----------------------------------" << endl;
                cout <<"Ingrese el importe abonado: ";
                cin >> importe;
                cout << endl;
                acuimporte += importe;
                contpprin++;
                if( banmenorimp == false)
                {
                    menorimp = importe;
                    mozomenorimp = nromozo;
                    banmenorimp = true;
                }
                else
                {
                    if(importe < menorimp)
                    {
                        menorimp = importe;
                        mozomenorimp = nromozo;
                    }
                }
                break;

            case '3':
                cout <<"-----------------------------------" << endl;
                cout << "postre" << endl;
                cout <<"-----------------------------------" << endl;
                cout <<"Ingrese el importe abonado: ";
                cin >> importe;
                cout << endl;
                acuimporte += importe;
                contpostre++;
                break;
            }

        }

        cout << "El mozo " << nromozo << " tuvo: " << endl << "*" << contentrada << " entradas." << endl << "*" << contpprin << " platos principales." << endl << "*" << contpostre << " postres." << endl << endl;
        cout << "Ingrese el nro de mozo: ";
        cin >> nromozo;
        cout << endl;


    }
    cout << "El mozo que atendio el plato principal de menor importe fue el mozo " << mozomenorimp << endl;
    cout << "El promedio es de $" <<(float)acuimporte/contcomandas << endl;

    return 0;
}


