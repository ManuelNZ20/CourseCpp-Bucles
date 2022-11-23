/*
Ejercicio 2:
Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero.
En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores
que cero leídos
*/
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
    int number,account = 0;
    do
    {
        cout<<"Write a number: ";
        cin>>number;
        if (number>0)
        {
            account++;
        }
    } while (number!=0);
    
    system("pause");
    return 0;
}