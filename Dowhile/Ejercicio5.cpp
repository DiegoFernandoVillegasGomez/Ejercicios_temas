#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    double suma = 0;

    cout << "Ingrese un numero" << endl;
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
        i++;
    }
    cout << "La suma de los numeros pares es: " << suma << endl;

    return 0;
}