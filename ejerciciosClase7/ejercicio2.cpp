/*
Ejercicio 2 - Buscar un numero en el arreglo

Tema: Busqueda secuencial en arreglos
Autor: Jhontan Torres
Fecha: 11 de marzo de 2026

Enunciado: Realizar un programa en C++ que permita ingresar 6 numeros enteros en un arreglo.
Luego, pedir al usario un numero adicional para buscar dentro del arreglo.

Programa debe indicar:
    Si el numero fue encontrado.
    y en que posicion se encuentra el numero.

Si el numero no existe en el arreglo, debe mostrar un mensaje indicando que no fue encontrado.


Pseudico:

Proceso Ejercicio2_BusquedaSecuencial
    Definir numeros Como Entero
    Definir i, buscado, posicion como Entero
    Definir econtrado como Logico
    Dimension numeros[6]

    Para i = 0 Hasta 5 Hacer
        Escribir "Ingrese el numero ", i+1, ": "
        Leer numeros[i]
    FinPara

    Escribir "Ingrese el numero que desea buscar: "
    Leer buscado

    encontrado = Falso
    posicion = -1

    Para i = 0 Hasta 5 Hacer
        Si numeros[i] = buscado Y encontrado = Falso Entonces
            encontrado = Verdadero
            posicion = i
        FinSi
    FinPara

    Si encontrado = Verdadero Entonces
        Escribir "Numero encontrado en la posicion: ", posicion
    sino
        Escribir "Numero no encontrado en el arreglo"
    FinSi
FinProceso
*/

#include <iostream>
using namespace std;

int main()
{
    // Arreglo donde vamos a guardar 6 numeros enteros
    int numeros[6];

    // Variable para recorrer el arreglo
    int i;

    // Variable donde guarderemos el nuemero que el usario quiere buscar
    int buscado;

    // Variable para guardar la posicion donde se encontr el numero
    int posicion = -1;

    // Variable bandera: nos ayuda a saber si encontramos o no el numero
    bool encontrado = false;

    // CARGA DE DATOS
    for (i = 0; i < 6; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << endl;

    // Pedimos el numero que se desea buscar
    cout << "Ingrese el numero que desea buscar: ";
    cin >> buscado;

    // BUSQUEDA SECUENCIAL

    // Recorremos el arreglo posicion por posicion
    for (i = 0; i < 6; i++)
    {
        // Comparamos si el valor guardado en la posicion i es igual al numero que queremos buscar
        if (numeros[i] == buscado && encontrado == false)
        {
            // Si coincide, marcamos que si fue encontrado
            encontrado = true;

            // Guardamos la posicion donde lo encontramos
            posicion = i;
        }
    }
    cout << endl;

    // RESULTADO FINAL

    if (encontrado == true)
    {
        cout << "Numero encontrado en la posicion: " << posicion << endl;
    }
    else
    {
        cout << "Numero no encontrado en el arrelgo." << endl;
    }

    return 0;
}