#include <iostream>
using namespace std;

int main()
{

    int n;
    int numero[n];
    int pares = 0, impares = 0;

    cout << "Ingrese un numero" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Numero #" << i + 1 << endl;
        cin >> numero[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (numero[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}