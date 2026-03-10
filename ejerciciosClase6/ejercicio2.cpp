/*
Ejercicio 2:  Acumulador con for
Autor: Jhonatan Torres
Fecha: 09 de marzo de 2026

Enunciado: Elaborar un programa en C++ que solicite al usario 5 numeros enteros
y calcule la suma total de esos numeros usando un bucle for.

Al final, el programa debe mostrar el resultado acumulado.

E/P/S:

Entrada:
    Cinco numeros enteros ingreados por el usario.

Proceso:
    Incializar una variable suma en 0
    Repetir 5 veces:
        pedir un numero
        leer el numero
        sumar ese valor al acumulador
    Al final, mostrar la suma total

Salida:
    La suma total de los 5 numeros ingresados.

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int i = 0, numero = 0, suma = 0;

    // Inicializamos el acumulador en 0
    // suma = 0;

    // Usamos un for porque ya sabemos que se repetira 5 veces
    for (i = 1; i <= 5; i++)
    { // i++ significa que i va a ir aumentando de uno en uno
        // Pedimos cada numero al usuario
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;

        // Acumulamos el numero ingresado en la suma total
        suma = suma + numero;
    }
    // Mostrar la suma final
    cout << "La suma total es: " << suma << endl;

    return 0;
}