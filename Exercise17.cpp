/*
Ejercicio 14:
En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el
número de:
a. Alumnos que aprobaron todos los exámenes.
b. Alumnos que aprobaron al menos un examen.
c. Alumnos que aprobaron únicamente el último examen.
Realice un programa que permita la lectura de los datos y el cálculo de las
estadísticas
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double nota = 0, suma = 0, nota1, nota2, nota3;
    const int nAlumnos = 5;
    const int nNotas = 3;
    int t = 0, u = 0, ul = 0;
    for (int i = 1; i <= nAlumnos; i++)
    {
        cout << "Digite la nota 1: ";
        cin >> nota1;
        cout << "Digite la nota 2: ";
        cin >> nota2;   
        cout << "Digite la nota 3: ";
        cin >> nota3;
        cout<<"\n";
        if (((nota1 + nota2 + nota3) / nNotas) >= 10.5)
        {
            t++;
        }
        else if ((nota1 >= 10.5) || (nota2 >= 10.5))
        {
            u++;
        }
        else if ((nota3 >= 10.5))
        {
            u++;
            ul++;
        }
    }
    cout<<"Alumnos que aprobaron todos los examenes: "<<t<<endl;
    cout<<"Alumnos que aprobaron al menos un examen: "<<u<<endl;
    cout<<"Alumnso que aprobaron únicamente el ultimo examen: "<<ul<<endl; 
    system("pause");   
    return 0;
}
