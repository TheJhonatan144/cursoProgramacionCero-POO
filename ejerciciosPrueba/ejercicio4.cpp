/*
Bootcamp Programación Cero a POO
Clase 9 - Errores, depuración y mini-integración
Ejercicio 4: Menú simple de operaciones
Autor: Jhonatan Torres
Fecha: 16/03/2026

Enunciado:

Desarrollar un programa que muestre un menú con las opciones:
Sumar
Restar
Multiplicar
El usuario debe ingresar dos números y una opción.
Luego el programa debe realizar la operación correspondiente.

El programa contiene errores intencionales.
Analizar, corregir y probar.

*/

#include <iostream>
using namespace std;

int main()
{
    int opcion;
    double a, b;

    cout << "MENU DE OPERACIONES" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;

    cout << "Ingrese una opcion: ";
    cin >> opcion;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    //
    if (opcion = 1)
    {
        cout << "Resultado: " << a + b << endl;
    }
    else if (opcion = 2)
    {
        cout << "Resultado: " << a - b << endl;
    }
    else if (opcion = 3)
    {
        cout << "Resultado: " << a * b << endl;
    }
    else
    {
        cout << "Opcion invalida" << endl;
    }

    return 0;
}