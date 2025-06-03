#include <iostream>
using namespace std;

int main()
{

    int Grados;

    cout << "Ingrese la temperatura en Celcius" << endl;
    cin >> Grados;

    if (Grados < 15)
    {
        cout << "Clima frio" << endl;
    }
    else if (Grados >= 15 && Grados <= 25)
    {
        cout << "El clima esta templado" << endl;
    }
    else if (Grados > 25)
    {
        cout << "El clima esta caliente" << endl;
    }

    return 0;
}