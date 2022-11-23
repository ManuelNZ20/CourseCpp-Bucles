/*
12. Hacer un programa que calcule el resultado de la siguiente expresión:
1-2+3-4+5-6..n
*/
#include <iostream>
#include<conio.h>
using namespace std;

int main(){
int n,sum = 0;
    cout<<"Digite un número: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=(i%2==0)?(-1*i):i;
    }
    cout<<"suma: "<<sum<<endl;
    system("pause");
    return 0;
}