#include <iostream>
using namespace std;

int main()
{

    int n;
    int numeros[n];
    float suma = 0;

    cout << "Ingrese una cantidad de numeros" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Numero #" << i + 1 << endl;
        cin >> numeros[i];
    }

    for (int i = 0; i < n; i++)
    {
        suma += numeros[i];
    }
    cout << "La suma es: " << suma << endl;

    return 0;
}