#include <iostream>
using namespace std;

int main()
{

    int Pass = 1234;
    int intento;

    cout << "Ingrese la contrasena correcta" << endl;
    cin >> intento;

    while (intento != Pass)
    {
       cout << "Ingrese la contrasena correcta" << endl;
       cin >> intento;
    }
    cout << "Su ocntrasena es correcta" << endl;

    return 0;
}