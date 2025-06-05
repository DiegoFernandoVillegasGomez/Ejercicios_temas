#include <iostream>
using namespace std;

int main(){

    int base, exponencial,resultado=1;
    cout << "Ingrese un numero base" << endl;
    cin >> base;

    cout << "Ingrese el numero exponencial" << endl;
    cin >> exponencial;

    for (int i = 1; i <= exponencial; i++)
    {
        resultado *= base;
    }

    cout <<"El resultado es: " << resultado << endl;
    
    

    return 0;
}