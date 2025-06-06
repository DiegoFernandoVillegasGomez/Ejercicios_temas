#include <iostream>
using namespace std;

int main()
{

    int N;
    cout << "Ingrese un numero" << endl;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            cout << -i << endl;
        }else 
        {
            cout << i << endl;
        }
        
    }

    return 0;
}