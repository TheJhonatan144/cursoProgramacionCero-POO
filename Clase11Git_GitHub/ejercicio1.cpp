/*
Clase 11 - Sistema simple de promedio de notas
Autor: Jhontan Torres
Fecha: 20-03-2026

Enunciado:
Desarrolar un programa en C++ que permita ingresar 3 notas, validarlas,
calcular el promedio final y mostrar si el estudiante aprueba o reprueba.

*/

#include <iostream>
using namespace std;

int main()
{

    double n1, n2, n3, promedio;

    cout << "=== SISTEMA SIMPLE DE PROMEDIO ===" << endl;

    cout << "Ingrese la nota 1: ";
    cin >> n1;
    while (n1 < 0 || n1 > 10)
    {
        cout << "Error. Ingrese una nota entre 0 y 10: ";
        cin >> n1;
    }

    cout << "Ingrese la nota 2: ";
    cin >> n2;
    while (n2 < 0 || n2 > 10)
    {
        cout << "Error. Ingrese una nota entre 0 y 10: ";
        cin >> n2;
    }

    cout << "Ingrese la nota 3: ";
    cin >> n3;
    while (n3 < 0 || n3 > 10)
    {
        cout << "Error. Ingrese una nota entre 0 y 10: ";
        cin >> n3;
    }

    promedio = (n1 + n2 + n3) / 3;

    cout << "Promedio final: " << promedio << endl;

    if (promedio >= 7)
    {
        cout << "Estado: APROBADO" << endl;
    }
    else
    {
        cout << "Estado: REPROBADO" << endl;
    }

    return 0;
}