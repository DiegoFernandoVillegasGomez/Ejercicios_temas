#include <iostream>
using namespace  std;

int main(){

    int Mes;

    cout << "Ingrese un numero del mes" << endl;
    cin >> Mes;

    switch (Mes)
    {
    case 1:
       cout << "Su mes es enero" << endl;
        break;
        case 2:
        cout << "Su mes es Febrero" << endl;
        break;
        case 3:
        cout << "Su mes es Marzo" << endl;
        break;
        case 4:
        cout << "Su mes es April" << endl;
        break;
        case 5:
        cout << "Su mes es Mayo" << endl;
        break;
        case 6:
        cout << "Su mes es Junio" << endl;
        break;
        case 7:
        cout << "Su mes es Julio" << endl;
        break;
        case 8:
        cout << "Su mes es Agosto" << endl;
        break;
        case 9:
        cout << "Su mes es Septiembre" << endl;
        break;
        case 10:
        cout << "Su mes es Octubre" << endl;
        break;
        case 11:
        cout << "Su mes es Novimbre" << endl;
        break;
        case 12:
        cout << "Su mes es Diciembre" << endl;
        break;
    default:
    cout << "Numero no valido, intente de nuevo" << endl;
        break;
    }

    return 0;
}