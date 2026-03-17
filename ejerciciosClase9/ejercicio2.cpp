/*
CLASE 9 - EJERCIO 1 PARA CORREGIR
Autor: Jhonatan Torres
Fecha: 16 de marzo de 2026

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
    for (int i = 0; i < n; i++)
    {
        suma = suma + numeros[i];
    }
    return suma;
}
// Funcion para encontrar el mayor
int encontrarMayor(int numeros[], int n)
{
    // Se inicializa con el primer elemento del arreglo
    int mayor = numeros[0];
    //
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] > mayor)

        //[4] [7] [8] [10] [11]
        // 0   1   2   3    4

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
        // Solo se cuenta los mayores que cero
        if (numeros[i] > 0)
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
