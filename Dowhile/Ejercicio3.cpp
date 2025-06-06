#include <iostream>
using namespace std;

int main()
{

    int secreto = 25;
    int intento;

    cout << "Ingrese el numero que quiere adivinar" << endl;
    cin >> intento;
    while (secreto != intento)
    {
        if (intento > secreto)
        {
            cout << "Su numero es mayor al que tiene que adivinar" << endl;
        }
        else
        {
            cout << "El numero es menor al que tiene que adivinar" << endl;
        }
        cin >> intento;
    }
    cout << "Felicidades ha adivinado su numero" << endl;

    return 0;
}