/*
La sentencia while:
while(expresión lógica){
    conjunto de instrucciones;
} 
*/
#include <iostream>//librería estandar 
#include <conio.h>//librería que permite permanecer en nuestro ejecutable
using namespace std;

int main(){
    int i = 1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
    getch();
    return 0;
}
