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

    cout << "Ingrese la nota 2: ";
    cin >> n2;

    cout << "Ingrese la nota 3: ";
    cin >> n3;

    promedio = (n1 + n2 + n3) / 3;

    cout << "Promedio final: " << promedio << endl;

    return 0;
}