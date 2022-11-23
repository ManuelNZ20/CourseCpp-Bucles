/*
Escriba un programa que calcule el valor de: 1*2*3*..*n
(factorial de un número)
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n,fact = 1;
    cout<<"Digite un numero: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"El factorial es: "<<fact<<endl;
    system("pause");
    return 0;
}