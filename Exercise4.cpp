/*
1. Realice un programa que solicite de la entrada estándar un entero del 1 al 10
y muestre en la salida estandar su tabla de multiplicar
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>//librería que permite acceder a un método para permanecer
//en nuestro ejecutable
using namespace std;
int main(){
    int number;//número
    int multiply;//multiplicar
    do{
    cout<<"Writer a number: ";
    cin>>number;
    }while(number<=0||number>10);
        for(int i=1;i<=12;i++){
            multiply = number*i;
            cout<<i<<"x"<<number<<" = "<<multiply<<endl;
        }
    system("pause");
    return 0;
}
