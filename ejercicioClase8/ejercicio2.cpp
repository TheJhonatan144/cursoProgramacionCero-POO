/*
EJERCICIO 2 - INTERCAMBIO DOS NUMEROS USANDO PASO POR REFERENCIA
Nombre: Jhonatan Torres
Fecha: 13 de marzo de 2026

Enunciado: Desarrolar un programa en C++ que permita ingresar dos numeros enteros y luego intercambiar sus valores
usando una funcion

Este ejercicio tiene como objetivo principal comprender la diferencia entre:
    Paso por valor
    paso por referencia


E/P/S:

Entrada:
    Dos numeros enteros ingresados por el usuario.

Proceso:
    Leer dos numeros.
    Mostrar sus valores antes del intercambio
    Llamar a una funcion que intercambie los valores.
    Mostrar los valores despues del intercambio.

Salida:
    Valores antes del intercambio.
    Valores depues del intercambio.



CONCEPTOS IMPORTANTES:

1. Paso por valor:
    La funcion recibe una copia de la variable
    Si cambias esa copia, la variable original no cambia.

2. Paso por referencia:
    La funcion trabaja con la variable original.
    Si cambias el valor del parametro, entonces va a cambiar fuera de la funcion.

3. El simbolo &
    En parametros, & indica referencia.
    Ejemplo:

    void intercambiar(int &a, int &b)

    Eso significa que la funcion trabajara con las variables reales.

4. Variable auxiliar
    Para intercambiar dos valores, se usa una variable temporal.


PSEUDOCODIGO

    Definir a, b como entero

    Leer a y b
    Mostrar valores antes
    Intercambiar a y b
    Mostrar valores depues
*/

// CODIGO EN C++

#include <iostream>
using namespace std;

// Prototipo o firma de la funcion
void intercambiar(int &a, int &b);

int main()
{
    // Declaramos variables
    int x, y;

    // Pedimos los dos numeros
    cout << "Ingrese dos numeros enteros: ";
    cin >> x >> y;

    // Mostramos valores antes del intercambio
    cout << "Antes del intercambio: " << endl;
    cout << " x = " << x << endl;
    cout << " y = " << y << endl;

    // llamamos a la funcion que intercambia los valores
    intercambiar(x, y);

    // Mostramos valores despues del intercambio
    cout << "Despues del intercambio" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

// Esta funcion intercambia los valores de las viriables originales
void intercambiar(int &a, int &b)
{
    int auxiliar;

    // Guardamos temporalmente el valor de a
    auxiliar = a;

    // Ahora a toma el valor de b
    a = b;

    // Finalmente b toma el valor guardado en auxiliar
    b = auxiliar;
}