/*
Escriba un programa que tome cada 4 horas la temperatura del exterior, leyéndola
durante un período de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura más alta y la más baja.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    double temp = 0,tempSum = 0,tempMedia = 0,tempMax = INT_MIN,tempMin = INT_MAX;
    for(int i=0;i<24;i+=4){
        cout<<(i)<<". Write a temperature: ";//escribir una temperatura
        cin>>temp;
        tempSum += temp;
        if(temp<tempMin){
            tempMin = temp;
        }
        if(temp>tempMax){
            tempMax = temp;
        }
    }
    tempMedia = tempSum / 6;
    cout<<"La temperatura medía del día es de: "<<tempMedia<<endl;
    cout<<"La temperatura más alta es de: "<<tempMax<<endl;
    cout<<"La temperatura más baja es de: "<<tempMin<<endl;

    system("pause");
    return 0;
}
