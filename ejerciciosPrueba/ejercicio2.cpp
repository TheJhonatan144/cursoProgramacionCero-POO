/*
Bootcamp Programación Cero a POO
Clase 9 - Errores, depuración y mini-integración
Ejercicio 2: Análisis de 5 números con funciones
Autor: Jhonatan Torres
Fecha: 16/03/2026

Enunciado:

Desarrollar un programa que:
Solicite al usuario 5 números enteros
Muestre la suma total
Muestre el número mayor
Muestre cuántos números son positivos

El programa ya fue iniciado, pero contiene errores intencionales de lógica y manejo de arreglos.
En clase se debe revisar, corregir y probar.
*/

#include <iostream>
using namespace std;

// Funcion para calcular la suma de los elementos del arreglo
int calcularSuma(int numeros[], int n)
{
    int suma = 0;

    //
    for (int i = 0; i <= n; i++)
    {
        suma = suma + numeros[i];
    }

    return suma;
}

// Funcion para encontrar el mayor
int encontrarMayor(int numeros[], int n)
{
    int mayor = 0;

    //
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
    }

    return mayor;
}

// Funcion para contar positivos
int contarPositivos(int numeros[], int n)
{
    int contador = 0;

    for (int i = 0; i < n; i++)
    {
        //
        if (numeros[i] >= 0)
        {
            contador++;
        }
    }

    return contador;
}

int main()
{
    const int N = 5;
    int numeros[N];

    cout << "Ingrese 5 numeros enteros:" << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Suma: " << calcularSuma(numeros, N) << endl;
    cout << "Mayor: " << encontrarMayor(numeros, N) << endl;
    cout << "Cantidad de positivos: " << contarPositivos(numeros, N) << endl;

    return 0;
}