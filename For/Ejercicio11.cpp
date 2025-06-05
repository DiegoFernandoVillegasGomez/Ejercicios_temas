#include <iostream>
using namespace std;

int main(){

    int N;
    double suma = 0;

    cout << "Ingrese una serie de numeros" << endl;
    cin >> N;

    for (; N;  N/=10)
    {
    suma += N%10;
    }
    cout << "La suma de los digitos es: " << suma << endl;

    return 0;
}