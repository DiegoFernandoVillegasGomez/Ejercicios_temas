#include <iostream>
using namespace std;

int main(){

    int N, suma= 0;

    // le pedimos al usuario un numero
    cout << "Ingrese un numero" << endl;
    // Se guarda en la variable N 
    cin >> N;

    // Ciclo for para poder decir cuantas veces se suma el numero que guardamos anteriormente 
    // lo inicialiamos en 0 y mientras que i sea menor o igual a n va ir aumentando
    for (int i = 0; i <= N; i++)
    {
        // con la variable suma que se declaro antes decimos hacemos la suma, suma = suma + i 
        suma += i;
    }
    cout << "La suma de los primeros " << N << " números naturales es: " << suma << endl;

    return 0;
}