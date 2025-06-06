#include <iostream>
using namespace std;

int main()
{

    int n;
    int numeros[n];
    int mayor = numeros[0];
    int menor = numeros[0];

    cout << "ingrese una serie de numeros" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Numero #" << i + 1 << endl;
        cin >> numeros[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    return 0;
}