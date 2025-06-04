#include <iostream>
using namespace std;

int main()
{

    int N;
    double suma;

    cout << "Ingrese la suma" << endl;
    cin >> N;

    for (int i = 1; i <= N; i += 2)
    {
        suma += i;
    }
    cout << "La suma de los numero pares del 1 al " << N << " Es: " << suma << endl;

    return 0;
}