#include <iostream>
using namespace std;

int main()
{

    int numero[5] = {5, 4, 6, 3, 1};

    for (int i = 4; i >= 0; i--)
    {
        cout << numero[i] << endl;
    }

    return 0;
}