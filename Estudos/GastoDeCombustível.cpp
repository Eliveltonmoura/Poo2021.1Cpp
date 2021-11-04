#include <iostream>
using namespace std;
int main()
{

    float hora, km, litro;

    cin >> hora >> km;

    litro = (hora * km) / 12;

    printf("%.3f\n", litro);

    return 0;
}