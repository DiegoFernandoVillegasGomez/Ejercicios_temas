#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Pedir los dos números
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Verificar si num1 es par o impar
    if (num1 % 2 == 0) {
        cout << "El primer número (" << num1 << ") es PAR." << endl;
    } else {
        cout << "El primer número (" << num1 << ") es IMPAR." << endl;
    }

    // Verificar si num2 es par o impar
    if (num2 % 2 == 0) {
        cout << "El segundo número (" << num2 << ") es PAR." << endl;
    } else {
        cout << "El segundo número (" << num2 << ") es IMPAR." << endl;
    }

    return 0;
}
