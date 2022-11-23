#include<iostream>
#include<conio.h>

using namespace std;
/*
Escriba un programa que calcule el valor de: 1+3+5+...+2n-1
*/
int main(){
    int n,sum = 0;
    cout<<"Digite un número: ";
    cin>>n;
    for(int i=1;i<=(2*n-1);i+=2){
        sum+=i;
    }
    cout<<"La suma es: "<<sum<<endl;
    getch();
    return 0;
}