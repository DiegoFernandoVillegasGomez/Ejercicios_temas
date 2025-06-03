#include <iostream>
using namespace std;

int main()
{

    int Numero, multiplicar;

    cout << "Ingrese un numero" << endl;
    cin >> Numero;

    for (int i = 1; i <= 10; i++)
    {
        multiplicar = i * Numero;

        cout << i << "x" << Numero << "=" << multiplicar << endl;
    }

    return 0;
}