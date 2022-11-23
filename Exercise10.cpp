/*
Escriba un programa que calcule el valor de: 1+2+3+4+...+n
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int number,sum = 0;
    do
    {
        cout<<"Write a number: ";
        cin>>number;

    } while (number<=0);
    for(int i=1;i<=number;i++){
        sum+=i;
    }
    cout<<"Sum: "<<sum<<endl;

    system("pause");
    return 0;
}

