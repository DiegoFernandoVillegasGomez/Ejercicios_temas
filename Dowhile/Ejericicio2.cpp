#include <iostream>
using namespace std;

int main()
{
    int n;
    double suma;
    cout << "ingrese un numero" << endl;

    while (true)
    {
        cin >> n;
        cout << "Siga ingresando un numero" << endl;
        if (n == 0)
        {
            break;
        }
        suma += n;
    }
    cout << "La suma de los numeros es: " << suma << endl;

    return 0;
}