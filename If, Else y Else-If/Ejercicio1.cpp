#include <iostream>
using namespace std;

int main()
{
    //Declaramos las variables
    int Edad;

    //Le pedimos al usuario su edad
    cout << "Bienvenido, ingrese su edad" << endl;
    cin >> Edad;

    //Validación para veririficar si es mayor o menor de edad
    if(Edad >= 18){
        cout << "Usted es mayor de edad" << endl;
    }else{
        cout << "Usted es menor de edad" << endl;
    }
    return 0;
}