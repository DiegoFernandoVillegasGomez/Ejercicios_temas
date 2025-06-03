#include <iostream>
using namespace std;

int main()
{

    int Dia;

    cout << "Ingrese un numero del 1 al 7 para saber el dia de semana" << endl;
    cin >> Dia;

    if (Dia == 1)
    {
        cout << "Dia lunes, corresponde a dia laboral" << endl;
    }
    else if (Dia == 2)
    {
        cout << "Dia martes, corresponde a dia laboral" << endl;
    }
    else if (Dia == 3)
    {
        cout << "Dia Miercoles, corresponde a dia laboral" << endl;
    }
    else if (Dia == 4)
    {
        cout << "Dia Jueves, corresponde a dia laboral" << endl;
    }
    else if (Dia == 5)
    {
        cout << "Dia Viernes, corresponde a dia laboral" << endl;
    }
    else if (Dia == 6)
    {
        cout << "Dia Sabado, corresponde a dia de descanso" << endl;
    }
    else if (Dia == 7)
    {
        cout << "Dia Domingo, corresponde a dia de descanso" << endl;
    }
    else
    {
        cout << "Ingrese un numero valido" << endl;
    }

    return 0;
}