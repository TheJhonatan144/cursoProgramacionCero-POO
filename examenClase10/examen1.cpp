/*
CORRRECCION DEL EXAMEN 1 EN C++

Autor: Jhonatan Torres
Fecha: 23 de marzo del 2026

Tema:
SISTEMA DE REGISTRO Y ANALISIS DE NOTAS DE ESTUDIANTES

Entrada:
    - Cantidad de estudiantes
    - Nombres de estudiantes
    = Nota de cada estudiante
    -  Opcion del menú
    - Nombre a buscar

Proceso:
    - Validar la cantidad de estudiantes
    - Validad que la nota este entre 0 y 20
    - Guardar datos en arreglo
    - Mostarar listado completo
    - Calcular el promedio general
    - Encontrar la nota mayor y la nota menor
    - Contar aprobador y reprobados.
    - Buscar un estudiante por nombre de forma secuencial

Salida:
    - Menu del sistema
    - Listado de estudiantes y notas
    - Promedio general
    - Nota mayor y nota menor con nombre
    - Cantidad de aprobados y reprobados
    - Resultado de la busqueda
*/

#include <iostream>
#include <string>
using namespace std;

// PROTOTIPO O FIRMA DE LAS FUNCIONES

int mostrarMenu();
void registrarEstudiante(string nombres[], float notas[], int &cantidad, bool $hayDatos);
void mostrarListado(string nombres[], float notas[], int cantidad, bool hayDatos);
void mostarPromedio(float notas[], int cantidad, bool hayDatos);
void mostarMayorMenor(string nombres[], float notas[], int cantidad, bool hayDatos);
void mostrarAprobadosReprobados(float notas[], int cantidad, bool hayDatos);
void buscarEstudiante(string nombres[], float notas[], int cantidad, bool hayDatos);
string estadoEstudiante(float nota);

int main()
{

    string nombres[20];
    float notas[20];

    int cantidad = 0;

    bool hayDatos = false;

    int opcion;

    // MENU REPETITVO

    do
    {
        opcion = mostrarMenu();
        switch (opcion)
        {
        case 1:
            // Registrar datos
            registrarEstudiante(nombres, notas, cantidad, hayDatos);
            break;
        case 2:
            // Mostrar todo el listado
            mostrarListado(nombres, notas, cantidad, hayDatos);
            break;
        case 3:
            // Calcular promedio general
            mostarPromedio(notas, cantidad, hayDatos);
            break;
        case 4:
            // Hallar nota mayor y menor
            mostarMayorMenor(nombres, notas, cantidad, hayDatos);
            break;
        case 5:
            // Contar aprobados y reprobados
            mostrarAprobadosReprobados(notas, cantidad, hayDatos);
            break;
        case 6:
            // Buscar estudiantes por nombre
            buscarEstudiante(nombres, notas, cantidad, hayDatos);
            break;
        case 7:
            cout << endl;
            cout << "Saliendo del programa..." << endl;
            cout << "Gracias por usar el programa" << endl;
            break;
        }
    } while (opcion != 7);
    return 0;
}

// FUNCION PARA MOSTAR EL MENU

int mostrarMenu()
{
    int opcion;

    cout << endl;
    cout << "====== MENU =====" << endl;
    cout << "1. Registrar estudiantes y notas" << endl;
    cout << "2. Mostrar listado completo " << endl;
    cout << "3. Mostrar promedio general" << endl;
    cout << "4. Mostar nota mayor y nota menor" << endl;
    cout << "5. Mostrar aprobados y reprobados" << endl;
    cout << "6. Buscar estudiantes por nombre" << endl;
    cout << "7. Salir" << endl;
    cout << "Seleccione una opcion" << endl;
    cin >> opcion;

    // Validacion del rango menu

    while (opcion < 1 || opcion > 7)
    {
        cout << "Error: opcion invalida. Ingrese una opcion entre 1 y 7";
        cin >> opcion;
    }

    return opcion;
}

// FUNCION PARA REGISTRAR ESTUDIANTES Y NOTAS
void registrarEstudiantes(string nombre[], float notas[], int &cantidad, bool &hayDatos)
{
    cout << endl;
    cout << "REGISTRO DE ESTUDIANTES" << endl;

    cout << "Ingrese la cantidad de estudiantes (1 a 20): ";
    cin >> cantidad;

    // Validacion de cantidad
    while (cantidad < 1 || cantidad > 20)
    {
        cout << "Error: cantidad invalida. Debe estar entre 1 y 20" << endl;
        cout << " Ingrese nievamente la cantidad de estudintes: ";
        cin >> cantidad;
    }

    // Recorrido hasta la cantidad REAL ingresada
    for (int i = 0; i < cantidad; i++)
    {
        cout << endl;
        cout << "Estudiante " << i + 1 << ": " << endl;

        // Para este nivel se aceptan leer nombre sin espacios.

        cout << "Ingrese el nombre (sin espacios): ";
        cin >> nombre[i];

        cout << "Ingrese la nota (0 a 20)";
        cin >> notas[i];

        while (notas[i] < 0 || notas[i] > 20)
        {
            cout >> "Error, la nota debe estar en el rango de 0 a 20" << endl;
            cout << "Ingrese nuevamente la nota: " cin >> notas[i];
        }
    }

    hay Datos = true

                cout < endl
                               cout
                           << "Registro completado correctamente" << endl;
}

// FUNCION PARA MOSTAR EL LISTADO COMPLETO

void mostrarListado(string nombres[], float notas[], int canitdad, bool hayDatos)
{
    if (hayDatos == falso)
    {
        cout << endl;
        cout << "No existen estudaintes registrados todavia" << endl;
        return;
    }
    cout << endl;
    cout << "LISTADO COMPLETO" << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ". " << nombre[i] << " - " << notas[i] << endl;
    }
}

// FUNCION PARA CALCULAR Y MOSTRAR PROMEDIO

void mostrarPromedio(float notas[], int cantidad, bool hayDatos)
{
    if (hayDatos == false)
    {
        cout << endl;
        cout << "No existen estudiantes registrados todavia. " << endl;
        return;
    }

    float suma = 0;
    float promedio;

    // Acumular todas las notas
    for (int i = 0; i < cantidad; i++)
    {
        suma = suma + notas[i];
    }

    // Calcular el promedio final
    promedio = suma / cantidad;

    cout << endl;
    cout "PROMEDIO GENERAL" << endl;
    cout << "Promedio genera es: " << promedio << endl;
}

// FUNCION PARA MOSTRAR LA NOTA MAYOR Y LA NOTA MENOR
