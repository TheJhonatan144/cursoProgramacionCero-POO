/*
EJERCICIO 1 - CLASE 8

Autor: Jhontan Torres
Fecha: 13 de marzo de 2026

Enunciado: Desarrollar un programa en C++ que permita ingresar 4 numeros enteros.
El programa debe usar funciones para:

    1. leer los 4 numeros,
    2. calcular la suma,
    3. calcular el promedio,
    4. mostrar los resultado.

El objetivo es comprender como dividir un problema en varioas funciones
con tareas claras.


E/P/S:

Entrada:
    4 numeros enteros ingresados por el usario.

Proceso:
    Leer los 4 numeros.
    Calcular la suma.
    Calcular el promedio.
    Mostrar los resultados en pantalla.

Salida:
    La suma de los 4 numeros.
    El promedio de los 4 numeros.

PLANTILLA

Funcion con retorno

tipo nombreFuncion(parametros){
    / instrucciones
    return resultado;
}

Funcion void

void nombreFuncion(parametros){
    / instrucciones
}


PSEUDOCODIGO

Definir n1, n2, n3, n4, suma como entero
Definir promedio como real

Leer los 4 numeros
Calcular suma
Calcular promedio
Mostrar suma y promedio

VERSION MODULARIZACION

Funcion leerCuatroNumeros(...)
Funcion calcularSuma(...)
Funcion calcularPromedio(...)
Funcion mostrarResultados(...)

Inicio
    leerCuatroNumeros(...)
    suma = calcularSuma(...)
    promedio = calcularPromedio(suma)
    mostrarResultados(suma, promedio)
Fin
*/

// CODIGO EN C++

#include <iostream>
using namespace std;

// Propotipos de funciones o firmas de funciones
void leerCuatroNumeros(int &a, int &b, int &c, int &d);
int calcularSuma(int a, int b, int c, int d);
double calcularPromedio(int suma); // un tipo de dato que permite declarar numeros decimales
void mostrarResultados(int suma, double promedio);

int main()
{
    // Variables donde se guardaran los numeros
    int n1, n2, n3, n4;

    // Variables para resultados
    int suma;
    double promedio;

    // Llamamos a la funcion que lee los 4 numeros
    leerCuatroNumeros(n1, n2, n3, n4);

    // Llamos a la funcion que calcula la suma
    suma = calcularSuma(n1, n2, n3, n4);

    // Llamamos a la funcion que calcule el promedio
    promedio = calcularPromedio(suma);

    // Mostramos los resultados
    mostrarResultados(suma, promedio);

    return 0;
}

// Esta funcion lee 4 numeros y los guarda en las variable originales
void leerCuatroNumeros(int &a, int &b, int &c, int &d)
{
    cout << "Ingrese 4 numeros enteros: ";
    cin >> a >> b >> c >> d;
}

// Esta funcion recibe 4 numeros y devuelve la suma
int calcularSuma(int a, int b, int c, int d)
{
    return a + b + c + d;
}

// Esta funcion recibe la suma y devuelve el promedio
double calcularPromedio(int suma)
{
    return suma / 4.0; // en c++ cuando usamos el double necesitamos
    // explicitamente decirle que tiene que usar los decimales para que no se los coma
}

// Esta funcion solo muestra resultados, por eso es void.
void mostrarResultados(int suma, double promedio)
{
    cout << "Resultados:" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}