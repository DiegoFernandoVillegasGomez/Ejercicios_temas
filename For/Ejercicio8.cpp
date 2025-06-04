#include <iostream>
using namespace std;

int main(){

    int N, numero;
    double suma, promedio;

    cout << "Ingrese la cantidad de numeros que desea" << endl;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
    cout << "Numero " << i + 1 << " es: "<< endl;
    cin >> numero;
    suma += numero;
    }

    promedio = suma / N;
    cout << "Su promedio es de: "<< promedio << endl;
    
    

    return 0;
}