#include <iostream>
using namespace std;

int main()
{

    int Opcion;

    cout << "------Menu------" << endl;
    cout << "1. opcion 1" << endl;
    cout << "2. opcion 2" << endl;
    cout << "3. opcion 3" << endl;
    cout << "4. opcion 4" << endl;
    cout << "5. salir" << endl;

    while (true)
    {
        cin >> Opcion;

        if (Opcion == 5)
        {
            cout << "Usted ha salido del sistema" << endl;
            break;
        }
        else
        {
            cout << "------Menu------" << endl;
            cout << "1. opcion 1" << endl;
            cout << "2. opcion 2" << endl;
            cout << "3. opcion 3" << endl;
            cout << "4. opcion 4" << endl;
            cout << "5. salir" << endl;
        }
    }

    return 0;
}