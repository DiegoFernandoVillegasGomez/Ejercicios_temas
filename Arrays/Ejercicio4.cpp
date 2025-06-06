#include <iostream>
using namespace std;

int main()
{

    int n;
    int numero[5] = {5, 4, 6, 7, 8};
    int encontrar = 0;

    cout << "Ingrese el numero que quiere encontrar" << endl;
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        if (numero[5] == encontrar)
        {
            encontrar = 1;
            break;
        }
    }
    if (encontrar == 1)
    {
        cout << "El numero: " << n << "Si pertenece al arreglo" << endl;
    }
    else
    {
        cout << "El numero: " << n << "No pertenece al arreglo" << endl;
    }

    return 0;
}