/*
Hacer un programa que realice la serie fibonacci
Fibonacci -> 1,1,2,3,5,8,13,...,n
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,a = 0,b = 1,fib = 1;
    cout<<"Digite un numero: ";
    cin>>n;
    cout<<"Fibonacci -> ";
    for(int i=1;i<=n;i++){
        cout<<fib<<", ";
        fib = a + b;
        a = b;
        b = fib;
    }   
    cout<<"\n";
    system("pause");
    return 0;
}