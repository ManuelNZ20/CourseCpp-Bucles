/*
Escriba un programa que calcule el valor de: 1!+2!+3!+..+n!
(suma de factorial)
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int n,fact = 1,sum = 0;
    cout<<"Digite un numero: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact*=i;
        sum+=fact;
    }
    cout<<"La suma de los factorial: "<<sum<<endl;
    system("pause");
    return 0;
}