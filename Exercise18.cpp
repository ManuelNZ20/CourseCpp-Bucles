#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
/*
15. Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango[1-100], e indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio, así hasta que lo adivine, y por ultimo mostrarle el número de intentos que lo llevo.

Formula para generar un número aleatorio
rand = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
*/
int main()
{
    int rd, numero, i = 0;

    srand(time(NULL)); // con esto se va a generar el numero aleatorio
    rd = 1 + rand() % (100 - 1 + 1);
    do
    {
        i++;
        cout << "\nDigite un número: ";
        cin >> numero;
        if (numero != rd)
        {
            if (numero > rd)
            {
                cout << "Numero demasiado grande" << endl;
            }
            else
            {
                cout << "Numero pequeño" << endl;
            }
        }
        else
        {
            cout << "Número encontrado";
        }

        /* code */
    } while (numero != rd);
    cout << "N° de intentos: " << i << endl;
    system("pause");
    return 0;
}