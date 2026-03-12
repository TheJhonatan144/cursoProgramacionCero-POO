/*
Ejercicio 1 - Cargar y mostrar 5 notas

Tema: Arreglos 1D: carga y recorrido
Autor: Jhonatan Torres
Fecha: 11 de marzo de 2026

Enunciado: Realizar un programa en C++ que permita ingresar 5 notas enteras en un
arreglo. Luego, el programa debe mostrar todas las notas ingresadas, una por una,
indicando tambien la posicion en la que fueron guardadas.

Pseucodigo:

Proceso Ejercicio1_Notas

    Definir notas Como Entero
    Definir i como Entero
    Dimesion notas[5]

    Para i = 0 Hasta 4 Hacer
        Escribir "Ingrese la nota ", i + 1, ": "
        Leer notas[i]
    FinPara

    Escribir "Notas registradas: "

    Para i=0 Hasta 4 Hacer
        Escribir "Posicion ", i, ": ", notas[i]
    FinPara
FinProceso

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos un arreglo de 5 enteros para guardas las notas
    int notas[5];

    // Variable que usaremos para recorre el arreglo
    int i;

    // CARGA DE DATOS

    // Recorremos las 5 posiciones del arreglo
    for (i = 0; i < 5; i++)
    {
        // Pedimos al usuario una nota
        cout << "Ingrese la nota " << i + 1 << ": ";

        // Guardamos la nota en la posicion i del arreglo
        cin >> notas[i];
    }

    cout << endl;
    cout << "Notas registradas: " << endl;

    // IMPRESION DE DATOS

    // Volvemos a recorrer el arreglo para mostrar lo que guardamos
    for (i = 0; i < 5; i++)
    {
        // Mostramos la posicion y el valor guardado en esa posicion
        cout << "Posicion " << i << ": " << notas[i] << endl;
    }

    return 0;
}
