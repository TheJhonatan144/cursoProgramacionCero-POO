/*
Ejercicio 1: Contador con while
Autor: Jhonatan Torres
Fecha: 09 de marzo del 2026

Enunciado: Elaborar un programa en C++ que solicite al usario un numero entero positivo N y muestre en pantalla
los numeros desde 1 hasta N usando un bucle while.

Si el usario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje de error y terminar.

E/P/S

Entrada:
    Un numero entero positivo N.

Proceso:
    Leer el valor de N
    Verificar si N es mayor que 0
    Si no les, mostrar un mensaje de error
    Si si lo es, usar un contador que inicie en 1
    Repetir mientrar el contador sea menor o igual a N
    Mostrar el valro del contador
    Aumentar el contador en 1 en cada vuelta.

Salida:
    Los numeros del 1 hasta N
    O un mensaje de error si el numero ingresado no es valido.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos la variables necesarias.
    int N = 0, contador = 0;

    // Pedir al usario un numero entero positivo
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    // Validamos que el numero sea mayor que 0
    if (N <= 0)
    {
        // Si el numero no es valido, mostramos un mensaje de error.
        cout << "ERROR: el numero debe ser mayor que 0." << endl;
    }
    else
    {
        // Inicializamos el contador en 1
        contador = 1;

        // Repetimos mientras el contador sea menor o igual a N
        while (contador <= N)
        {
            // Mostramos el valor actual del contador
            cout << contador << endl;

            // Aumemtamos el contador en 1 para evitar bucle infinito
            contador = contador + 1;
        }
    }

    return 0;
}