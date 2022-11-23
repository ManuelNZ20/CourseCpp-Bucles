/*
Ejercicio 6: Escriba un programa que calcule x^y donde tanto
x como y son enteros positivos, sin utilizar función pow
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int sum = 1;
    int x, y;
    do
    {
        cout << "Write X: ";
        cin >> x;
    } while (x < 0);
    do
    {
        cout << "Write Y: ";
        cin >> y;
    } while (y < 0);
    if (y == 0)
    {
        cout << x << "^" << y << " = " << sum << endl;
    }
    else
    {
        for (int i = 1; i <= y; i++)
        {
            sum *= x;
        }
        cout << "Result " << x << "^" << y << " = " << sum << endl;
    }

    system("pause");
    return 0;
}
