/*
escribe un programa que calcule el valor de:
2^1+2^2+2^3+..+2^n
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    double sum = 0;
    cout<<"Digite un numero: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=(pow(2,i));
    }
    cout<<"La suma es: "<<sum<<endl;
    system("pause");
    return 0;
}
