/*
CLASE 9 - ERORRES Y DEPURACION
Autor: Jhonatan Torres
Fecha: 16-03-2026

VAMOS A EXPLICAR LO SIGUIENTE:
1. El programa compile
2. El programa corra
3. Pero el resultado sale mal
4. Vamos a observar las variables
5. Para eso usamos cout temporales

*/

#include <iostream>
using namespace std;

int main()
{
    int numeros[5];
    int suma = 0;
    double promedio;

    cout << "Ingrese 5 numeros enteros: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++)
    {
        suma = suma + numeros[i];
        // DEPURACION TEMPORAL
        // cout << "[DEBUG] i = " << i << endl;
        // cout << "[DEBUG] numero actual = " << numeros[i] << endl;
        // cout << "[DEBUG] suma acumulada = " << suma << endl;
        // cout << "---------------------------" << endl;
    }

    // ERROR DE LOGICA INTENCIONAL:
    //  Aqui se usa division entera porque suma es int y 5 tambien es int
    promedio = suma / 5.0;

    // DEPURACION TEMPORAL
    // cout << "[DEBUG] suma final = " << suma << endl;
    // cout << "[DEBUG] promedio calculado = " << promedio << endl;

    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}