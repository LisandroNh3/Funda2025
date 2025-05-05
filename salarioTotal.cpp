#include <iostream>
using namespace std;
#include <cmath>

int main()
{

    int salario, afp, iss, renta, opcion, SalA, SalI, SalR, SalT;
    salario = 0;

    cout << "Porfavor ingrese su salario bruto" << endl;
    cin >> salario;

    cout << "Indique que desea hacer marcando con un numero 1- AFP, 2- ISS, 3- Renta, 4- Total, 5- Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        SalA = salario * 0.725;
        cout << "Su salario menos AFP es $" << SalA << endl;
        break;

    case 2:
        if (salario <= 1000)
        {
            SalI = salario * 0.03;
            cout << "Su salario menos ISS es $" << SalI << endl;
        }

        else
        {
            SalI = salario - 30;
            cout << "Su salario menos ISS es $" << SalI << endl;
        }

        break;

    case 3:

        if (salario <= 472.00)
        {
            cout << "Esta excento de renta" << endl;
        }
        else if (salario <= 895.24)
        {

            SalR = salario * 0.1;
            cout << "Su salario menos renta es de" << SalR << endl;
        }

        else if (salario <= 2038.9)
        {

            SalR = salario * 0.2;
            cout << "Su salario menos renta es de" << SalR << endl;
        }

        else
            {
                SalR = salario * 0.3;
                cout << "Su salario menos renta es de" << SalR << endl;
            }

            case 4:

            SalT = salario - SalA - SalI - SalR;
            cout << SalT;


    
        break;
    }


    return 0;
}

// 472.00 excento
// 472.01 a 895.24 10%
// 895.25 a 2038.10 20%
// arriba de 2038.10 30%