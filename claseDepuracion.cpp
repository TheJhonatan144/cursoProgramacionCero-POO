/*
Clase 9 - Errores, depuraciones y mini-integracion
Mini bloque: Depuracion con cout
Autor: Jhontan Torres
Fecha: 16-03-2026

IDEA CLAVE:
Cuando no entiendan que esta pasando, hagan que el programa hable.

QUE VAMOS A EXPLICAR:
1. El programa compila
2. El programa corre
3. Pero el resultado sale mal
4. Entonces necesitamos observar variables
5. Para eso usamos cout temporalmente.
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
    }

    // CORRECCION
    // Se usa 5.0 para forzar division real
    promedio = suma / 5.0;

    // DEPURACION TEMPORAL

    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}