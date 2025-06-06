#include <iostream>
using namespace std;

int main(){

    int N, invertido;

    cout << "Ingrese una serie de numeros" << endl;
    cin >> N;

    for (;N ; N= N /10)
    {
        invertido = invertido * 10 + N % 10;
    }

    cout << "El numero invertido de: " << N << "es: " << invertido << endl;
    

    return 0;
}