/*
Bootcamp Programación Cero a POO
Clase 9 - Errores, depuración y mini-integración
Ejercicio 3: Validación de edad
Autor: Jhonatan Torres
Fecha: 16/03/2026

Enunciado:

Desarrollar un programa que solicite la edad de una persona y muestre:
“Niño” si la edad está entre 0 y 11
“Adolescente” si la edad está entre 12 y 17
“Adulto” si la edad es 18 o más
Además, si la edad es negativa, debe mostrar “Edad inválida”.

El siguiente programa contiene errores intencionales.
Analizar, corregir y probar.

*/

#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Ingrese la edad: ";
    cin >> edad;

    //
    if (edad <= 11)
    {
        cout << "Nino" << endl;
    }
    //
    else if (edad <= 17)
    {
        cout << "Adolescente" << endl;
    }
    else
    {
        cout << "Adulto" << endl;
    }

    return 0;
}