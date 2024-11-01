#include <iostream>

using namespace std;

int main()
{
    int contador = 10;

    // Ciclo que cuenta de 10 a 1
    do
    {
        cout << contador << endl;
        contador--;
    } while (contador >= 1);

    return 0;
}