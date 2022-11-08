/*Un banco tiene tres sucursales, ubicadas en las siguientes localidades:
- Sucursal 1: Virreyes
- Sucursal 2: San Fernando
- Sucursal 3: Tigre

En cada una de ellas se registra para cada transacción que realiza un cliente, los siguientes datos:
- Nro. de Cliente (100 al 1200)
- Nro. de Sucursal (1, 2 ó 3)
- Código de Transacción (‘D’ para depósitos, ‘E’ para extracciones)
- Monto en pesos de la transacción

El último registro se indica con nro. de cliente igual a cero. Se pide a partir de estos datos, determinar e informar:
a) Cantidad de depósitos por más de $1000.-.
b) El nro. de cliente que hizo la extracción por mayor monto, y en que sucursal la hizo.
c) El porcentaje de transacciones realizadas en cada una de las sucursales, respecto al total de las mismas.
d) Total de pesos depositados en cada una de las sucursales.
e) Cantidad de depósitos en la sucursal de Tigre.
f) El nro. de sucursal que recibió más cantidad de depósitos (sin importar el monto de los mismos).*/


#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int nrocliente, contdepo = 0, contran1 = 0, contran2 = 0, contran3 = 0, conttigre = 0, contvirreyes = 0, contsanfer = 0, mayorcliente;
    char nrosucursal, transaccion, mayorsucursal;
    float monto, maxi = 0, acudepo1 = 0, acudepo2 = 0, acudepo3 = 0;
    bool bandpuntob = false;

    cout << endl << "--------------------------------------------" << endl;
    cout << "Ingrese el nro de cliente: ";
    cin >> nrocliente;
    cout << endl;
    while (nrocliente != 0 && nrocliente >= 100 && nrocliente <= 1200)
    {

        cout << "Ingrese el nro de sucursal: ";
        cin >> nrosucursal;
        cout << endl;

        switch (nrosucursal)
        {
        case '1':
            cout << "Sucursal Virreyes" << endl;
            cout << endl << "Ingrese Codigo de Transaccion (D para depositos, E para extracciones): ";
            cin >> transaccion;
            transaccion = toupper(transaccion);
            //C
            contran1++;
            cout << endl << "Ingrese el monto: ";
            cin >> monto;
            cout << endl;
            cout << endl << "--------------------------------------------" << endl;

            //D
            if(transaccion == 'D')
            {
                acudepo1 += monto;
                //F
                contvirreyes++;


            }

            //A
            if ( transaccion == 'D' && monto > 1000 )
            {
                contdepo++;
            }
            //B
            if(transaccion == 'E' && bandpuntob == false)
            {
                maxi = monto;
                mayorcliente = nrocliente;
                mayorsucursal = nrosucursal;

                bandpuntob = true;
            }
            else if (transaccion == 'E' && bandpuntob == true)
            {

                if (monto > maxi)
                {

                    maxi = monto;
                    mayorcliente = nrocliente;
                    mayorsucursal = nrosucursal;
                }

            }






            break;

        case '2':
            cout << "Sucursal San Fernando" << endl;
            cout << endl << "Ingrese Codigo de Transaccion (D para depositos, E para extracciones): ";
            cin >> transaccion;
          transaccion = toupper(transaccion);
            //C
            contran2++;
            cout << endl << "Ingrese el monto: ";
            cin >> monto;
            cout << endl;
            cout << endl << "--------------------------------------------" << endl;
            //D
            if(transaccion == 'D')
            {
                acudepo2 += monto;
                //F
                contsanfer++;


            }
            //A
            if ( transaccion == 'D' && monto > 1000 )
            {
                contdepo++;
            }
            //B
            if(transaccion == 'E' && bandpuntob == false)
            {
                maxi = monto;
                mayorcliente = nrocliente;
                mayorsucursal = nrosucursal;
                bandpuntob = true;
            }
            else if (transaccion == 'E' && bandpuntob == true)
            {

                if (monto > maxi)
                {

                    maxi = monto;
                    mayorcliente = nrocliente;
                    mayorsucursal = nrosucursal;
                }

            }
            break;
        case '3':
            cout << "Sucursal Tigre" << endl;
            cout << endl << "Ingrese Codigo de Transaccion (D para depositos, E para extracciones): ";
            cin >> transaccion;
          transaccion = toupper(transaccion);
            //C
            contran3++;
            cout << endl << "Ingrese el monto: ";
            cin >> monto;
            cout << endl;
            cout << endl << "--------------------------------------------" << endl;;
            //D
            if(transaccion == 'D')
            {
                acudepo3 += monto;
                //EF
                conttigre++;


            }
            //A
            if ( transaccion == 'D' && monto > 1000 )
            {
                contdepo++;
            }
            //B
            if(transaccion == 'E' && bandpuntob == false)
            {
                maxi = monto;
                mayorcliente = nrocliente;
                mayorsucursal = nrosucursal;
                bandpuntob = true;
            }
            else if (transaccion == 'E' && bandpuntob == true)
            {

                if (monto > maxi)
                {

                    maxi = monto;
                    mayorcliente = nrocliente;
                    mayorsucursal = nrosucursal;
                }

            }
            break;
        }


        cout << "Ingrese el nro de cliente: ";
        cin >> nrocliente;
        cout << endl;

    }


    cout << "La cantidad de depositos por mas de $1000 son: " << contdepo << endl;
    cout << "El nro. de cliente que hizo la extraccion por mayor monto fue: " << mayorcliente << " en la sucursal: " << mayorsucursal << endl;
    cout << "El porcentaje de transacciones realizadas la sucursal 1: " << (contran1 * 100)/(contran1 + contran2 + contran3)<< " % " << endl;
    cout << "El porcentaje de transacciones realizadas la sucursal 2: " << (contran2 * 100)/(contran1 + contran2 + contran3)<< " % " << endl;
    cout << "El porcentaje de transacciones realizadas la sucursal 3: " << (contran3 * 100)/(contran1 + contran2 + contran3)<< " % " << endl;
    cout << "El total de pesos depositados en la sucursal 1 es: $" << acudepo1 << endl;
    cout << "El total de pesos depositados en la sucursal 2 es: $" << acudepo2 << endl;
    cout << "El total de pesos depositados en la sucursal 3 es: $" << acudepo3 << endl;
    cout << "La cantidad de depositos en la sucursal de Tigre son: " << conttigre << endl;
    if (contvirreyes > contsanfer && contvirreyes > conttigre)
    {
        cout << "El nro de sucursal que recibio mas cantidad de depositos (sin importar el monto de los mismos), fue la sucursal 1" << endl;
    }
    else if (contsanfer > contvirreyes && contsanfer > conttigre)
    {
        cout << "El nro de sucursal que recibio mas cantidad de depositos (sin importar el monto de los mismos), fue la sucursal 2" << endl;
    }
    else if (conttigre > contsanfer && conttigre > contvirreyes)
    {
        cout << "El nro de sucursal que recibio mas cantidad de depositos (sin importar el monto de los mismos), fue la sucursal 3" << endl;
    }













    return 0;
}
