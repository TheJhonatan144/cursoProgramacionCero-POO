/*
Ejercicio 1
Autor: Jhonatan Torres
Fecha: 06 de marzo de 2026

Enunciado: Suma de dos enteros (I/O). Pida dos numeros enteros y muestr la suma de dichos numeros.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declarar
    int numero1 = 0, numero2 = 0, suma = 0;

    // Entrada de datos
    cout << "****BIENVENIDOS AL PROGRAMA*****" << endl;
    cout << "Ingrese el primer numero: " << endl;
    cin >> numero1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> numero2;

    // Proceso

    suma = numero1 + numero2;
    // Resultado

    cout << "Suma = " << suma << endl;

    return 0;
}
