#include <iostream>
using namespace std;

int main(){
int Num1, Num2;

cout << "Ingrese el primer numero" << endl;
cin >> Num1;

cout << "Ingrese el segundo numero" << endl;
cin >> Num2;

if (Num1 > Num2)
{
   cout << "El numero: " << Num1 << "Es mayor que el numero: "<< Num2 << endl;
}else if (Num2 > Num1)
{
   cout << "El numero: " << Num2 << "Es mayor que el numero: "<< Num1 << endl;
} else if (Num1 == Num2)
{
    cout << "Los numeros son iguales" << endl;
}

return 0;
}