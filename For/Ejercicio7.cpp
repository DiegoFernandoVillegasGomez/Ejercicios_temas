#include <iostream>
using namespace std;

int main()
{

    int N;
    double Multiplicacion = 1;

    cout << "Ingrese un numero para multiplicar" << endl;
    cin >> N;

    for (int i = 0; i <= N; i++)
    {
        Multiplicacion *= i;
    }

    cout << "El factorial de: " << N << " es: " << Multiplicacion << endl;

        return 0;
}