/*
3. Realice un programa que calcule y muestre en la salida estándar la suma de los
cuadrados de los 10 primeros enteros mayores que cero
*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    double sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += pow(i,2);
    }
    cout<<"El resultado de la suma es: "<<sum<<endl;
    getch();
    return 0;
}
