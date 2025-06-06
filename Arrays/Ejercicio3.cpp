#include <iostream>
using namespace std;

int main()
{

    int n;
    int numero[n];
    double suma = 0;

    cout << "Ingrese los numeros que quiere guardar" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Numero #" << i + 1 << endl;
        cin >> numero[i];
    }

    for (int i = 0; i < n; i++)
    {
        suma += numero[i];
    }
    double promedio = suma / n;

    cout << "El promedio de los datos es: " << promedio << endl;

    return 0;
}