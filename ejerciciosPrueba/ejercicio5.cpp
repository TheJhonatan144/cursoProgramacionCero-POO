/*
Bootcamp Programación Cero a POO
Clase 9 - Errores, depuración y mini-integración
Ejercicio 5: Contar números pares
Autor: Jhonatan Torres
Fecha: 16/03/2026

Enunciado:

Desarrollar un programa que solicite 5 números enteros, los guarde en un arreglo y luego muestre cuántos de ellos son pares.

El programa contiene errores intencionales.
Analizar, corregir y probar.
*/

#include <iostream>
using namespace std;

int main()
{
    const int N = 5; // const significa crear una constante, se asigna un valor numerico y se asegura que ese valor no se pueda cambiar.
    int numeros[N];
    int contador = 0;

    cout << "Ingrese 5 numeros enteros:" << endl;

    //
    for (int i = 0; i <= N; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    //
    for (int i = 0; i <= N; i++)
    {
        //
        if (numeros[i] % 2 != 0)
        {
            contador++;
        }
    }

    cout << "Cantidad de numeros pares: " << contador << endl;

    return 0;
}

/*
2 / 2 = 1     residuo = 0
3 / 3 = 1     residuo = 0
6 / 3 = 2     residuo = 0
7 / 2 = 3     residuo = 1

7 % 2 = 1

es muy util para detectar numeros impares

*/