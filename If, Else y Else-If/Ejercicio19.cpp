#include <iostream>
using namespace std;

int main(){

    int Tarifa;

    cout << "Ingrese su tarifa" << endl;
    cin >> Tarifa;

    if (Tarifa <= 100)
    {
        cout << "Su tarifa es baja, debe de pagar 100" << endl;
    }else if (Tarifa >= 100 && Tarifa <= 200)
    {
       cout << "Su tarifa es media, 250" << endl;
    }else if (Tarifa > 200)
    {
        cout << "Su tarifa es alta, 450" << endl;
    }
    
    
    

    return 0;
}