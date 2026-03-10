/*
Ejercicio 3: Menu repetitivo con do while

Autor: Jhonatan Torres
Fecha: 09 de marzo de 2026

Enunciado: Elaborar un programa en C++ que muestre un menu repetitivo con las siguiente opciones:
    1. Sumas dos numeros.
    2. Mostrar la tabla de multiplicar de un numero
    3. Salir

    El programa debe repetirse hasta que el usuario elija la opcion 3.

    Si el usuario ingresa una opcion invalida, el programa debe mostrar un mensaje de error y volver a mostrar
    el menu.

E/P/S

Entrada:
    Una opcion del menu
    Segun la opcion elegida:
        dos numeros para sumar
        o un numero para mostrar su tabla de multiplicar hasta el 10

Proceso:
    Mostrar el menu
    Leer la opcion
    Si la opcion es 1:
        pedir dos numeros
        sumarlos
        mostrar el resultado
    Si la opcion es 2:
        pedir un numero
        mostrar su tabla del 1 al 10
    Si la opcion es invalida:
        mostrar mensaje de error

    Repetir mientras la opcion sea diferente de 3

Salida:
    Resultado de la suma
    O tabla de multiplicar
    o mensaje de salida
    o mensaje de error por opcion invalida.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int opcion = 0;
    int num1 = 0, num2 = 0, suma = 0;
    int numero = 0, i = 0;

    // Usamos do while porque queremos que el menu se muestre al menos una vez
    do
    {
        // Mostrar el menu principal
        cout << "======== MENU =========" << endl;
        cout << "1. Sumar dos numeros" << endl;
        cout << "2. Mostrar tabla de multiplicar" << endl;
        cout << "3. Salir" << endl;
        cout << "Selecione una opcion: ";
        cin >> opcion;

        // Evaluamos la opcion elegida.
        if (opcion == 1)
        { // = significa asinamos un valor a una variable, == signica una comparacion
            // Pedimos dos numeros para sumarlos
            cout << "Ingrese el primero numero: ";
            cin >> num1;

            cout << "Ingrese el segundo numero: ";
            cin >> num2;

            // Realizamos la suma
            suma = num1 + num2;

            // Mostramos el resultado
            cout << "La suma es: " << suma << endl;
        }
        else if (opcion == 2)
        {
            // Pedimos un nuero para mostrar su tabla de multiplicar
            cout << "Ingrese un numero: ";
            cin >> numero;

            // Mostramos la tabla del 1 al 10 usando un for
            for (i = 1; i <= 10; i++)
            {
                cout << numero << " x " << i << " = " << numero * i << endl;
            }
        }
        else if (opcion == 3)
        {
            // Mostramos mensaje de salida
            cout << "Saliendo del programa... " << endl;
        }
        else
        {
            // Si la opcion no esta en el rango calido, mostramos error.
            cout << "ERROR: opcion invalida. Intente nuevamente." << endl;
        }

        // El menu seguira repitiendose mientras la opcion sea diferente de 3
    } while (opcion != 3); // "!=" negacion del igual que es lo mismo que decir "que sea distinto"

    return 0;
}
