/*
La sentencia for
for(expr1;expresión lógica;expr2){
    conjunto de instrucciones;
}
*/

#include<iostream>
#include<conio.h>//nos permite incluir un método para no cerrar nuesto ejecutable
using namespace std;
int main(){
    int i;
    for(i=1;i<=10;i++){
        cout<<i<<endl;
    }
    getch();
    return 0;    
}
