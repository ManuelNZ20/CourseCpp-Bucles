/*
Ejercicio 5:
Escribe un programa que lea valores enteros hasta que se introduzca un valor
en el rango[20-30] o se introduzca el valor 0. El programa debe entragar la
suma de los valores mayores a 0 introducidos
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int number,sum = 0;
    do
    {
        cout<<"Write a number: ";
        cin>>number;
        if(number>0){
            sum+=number;
        }
    } while ((number<20||number>30)&&number!=0);
    cout<<"Suma total: "<<sum<<endl;
    getch();
    return 0;
}

