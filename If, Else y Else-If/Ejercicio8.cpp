#include <iostream>
using namespace std;

int main(){
    
    int Contrasena;

    cout << "Ingrese su contrasena" << endl;
    cin >> Contrasena;

    if (Contrasena == 1234)
    {
        cout << "Su contrasena es correcta" << endl;
    }else{
        cout << "Su contrasena es incorrecta, intente de nuevo" << endl;
    }
    

    return 0;
}