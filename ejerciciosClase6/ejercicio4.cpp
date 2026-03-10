
/*
switch: es una estructura de seleccio  que permite ejecutar diferentes bloques de codigo
segun el valor de una variable.

Suele ser util cuando:
    hay vairas opciones numericas o fijas
    se quiere organizar mejor un menu
    cada opcion representa un caso distinto

Diferencias rapidas con if/else
    if/else sirve mas cuando las condiciones pueden ser variadas o complejas
    switch sirve mas cuando comparas una sola variable contra varios valores concretos.


*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int opcion;
    int numero, cuadrado;

    // Usamos do while para que el menu se muestre al menos una vez
    do
    {
        // Mostramos el menu
        cout << "\n===== MENU CON SWITCH =====" << endl;
        cout << "1. Mostrar bienvenida" << endl;
        cout << "2. Mostrar cuadrado de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Evaluamos la opcion ingresada usando switch
        switch (opcion)
        {
        case 1:
            // Opcion 1: mostrar mensaje
            cout << "Bienvenidos a la clase 6 de C++" << endl;
            break;

        case 2:
            // Opcion 2: pedir un numero y mostrar su cuadrado
            cout << "Ingrese un numero: ";
            cin >> numero;

            // Calculamos el cuadrado
            cuadrado = numero * numero;

            // Mostramos el resultado
            cout << "El cuadrado es: " << cuadrado << endl;
            break;

        case 3:
            // Opcion 3: salir del programa
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            // Si la opcion no coincide con ningun caso
            cout << "Error: opcion invalida." << endl;
        }

        // El menu se repite mientras la opcion sea diferente de 3
    } while (opcion != 3);

    return 0;
}