#include <iostream>
#include <conio.h>

using namespace std;

/*
16. Realice un programa que calcule la descomposición en factores primos de un número entero.
*/

int main()
{
    int numero = 0, i = 2;
    cout << "Write a number: ";
    cin >> numero;
    cout<<numero<<" = ";
    while (numero > 1)
    {
        if (numero % i == 0)
        {
            cout<<i<<"*";
            numero /= i;
        }
        else
        {
            i++;
        }
    }
    cout<<"\nProgramada terminado";
    getch();
    return 0;
}