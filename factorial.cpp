#include <iostream>
using namespace std;
int main ()
{
    int i, n, f;
    cout << "Ingrese un numero: \n";
    cin >> n;
 
    f=1;
    for ( i = 1; i <= n ; i++)
    {
        f = i*f;
        cout << "El factorial es: " << f << "\n";
    }
    return 0;
}