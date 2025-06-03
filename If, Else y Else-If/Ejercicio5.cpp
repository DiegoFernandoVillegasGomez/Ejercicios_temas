#include <iostream>
using namespace std;

int main()
{

    int compra, final;

    cout << "Ingrese el monto de su compra" << endl ;
    cin >> compra;

    if (compra >= 100)
    {
        final = compra - compra * 0.10;
        cout << "Usted ha obtenido un descuento del 10%" << endl;
        cout << "el monto final ha pagar es " << final << endl;
    }
    else 
    {
       cout << "No aplica al descuento" << endl;
    }

    return 0;
}