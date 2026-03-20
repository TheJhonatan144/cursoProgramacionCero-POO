/*
Nombre del estudiante: Jhonatan Torres
Curso: Bootcamp Programación Cero a POO
Clase: 10 - Examen 1 (C++)
Fecha: 18/03/2026
Título: CORRECCION EXAMEN 1

Tema:
Sistema de registro y análisis de notas de estudiantes

Entrada:
- Cantidad de estudiantes
- Nombres de estudiantes
- Nota de cada estudiante
- Opción del menú
- Nombre a buscar

Proceso:
- Validar la cantidad de estudiantes
- Validar que la nota esté entre 0 y 20
- Guardar datos en arreglos
- Mostrar listado completo
- Calcular promedio general
- Encontrar la nota mayor y la nota menor
- Contar aprobados y reprobados
- Buscar un estudiante por nombre de forma secuencial

Salida:
- Menú del sistema
- Listado de estudiantes y notas
- Promedio general
- Nota mayor y nota menor con nombre
- Cantidad de aprobados y reprobados
- Resultado de la búsqueda
*/

#include <iostream>
#include <string>
using namespace std;

// PROTOTIPOS DE FUNCIONES
int mostrarMenu();
void registrarEstudiantes(string nombres[], float notas[], int &cantidad, bool &hayDatos);
void mostrarListado(string nombres[], float notas[], int cantidad, bool hayDatos);
void mostrarPromedio(float notas[], int cantidad, bool hayDatos);
void mostrarMayorMenor(string nombres[], float notas[], int cantidad, bool hayDatos);
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

    do
    {
        opcion = mostrarMenu();

        switch (opcion)
        {
        case 1:
            registrarEstudiantes(nombres, notas, cantidad, hayDatos);
            break;
        case 2:
            mostrarListado(nombres, notas, cantidad, hayDatos);
            break;
        case 3:
            mostrarPromedio(notas, cantidad, hayDatos);
            break;
        case 4:
            mostrarMayorMenor(nombres, notas, cantidad, hayDatos);
            break;
        case 5:
            mostrarAprobadosReprobados(notas, cantidad, hayDatos);
            break;
        case 6:
            buscarEstudiante(nombres, notas, cantidad, hayDatos);
            break;
        case 7:
            cout << endl;
            cout << "Saliendo del programa..." << endl;
            cout << "Gracias por usar el sistema." << endl;
            break;
        }

    } while (opcion != 7);

    return 0;
}

// FUNCION PARA MOSTRAR EL MENU
int mostrarMenu()
{
    int opcion;

    cout << endl;
    cout << "=========== MENU ===========" << endl;
    cout << "1. Registrar estudiantes y notas" << endl;
    cout << "2. Mostrar listado completo" << endl;
    cout << "3. Mostrar promedio general" << endl;
    cout << "4. Mostrar nota mayor y nota menor" << endl;
    cout << "5. Mostrar aprobados y reprobados" << endl;
    cout << "6. Buscar estudiante por nombre" << endl;
    cout << "7. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    while (opcion < 1 || opcion > 7)
    {
        cout << "Error: opcion invalida. Ingrese una opcion entre 1 y 7: ";
        cin >> opcion;
    }

    return opcion;
}

// FUNCION PARA REGISTRAR ESTUDIANTES Y NOTAS
void registrarEstudiantes(string nombres[], float notas[], int &cantidad, bool &hayDatos)
{
    cout << endl;
    cout << "--- REGISTRO DE ESTUDIANTES ---" << endl;

    cout << "Ingrese la cantidad de estudiantes (1 a 20): ";
    cin >> cantidad;

    while (cantidad < 1 || cantidad > 20)
    {
        cout << "Error: la cantidad debe estar entre 1 y 20." << endl;
        cout << "Ingrese nuevamente la cantidad de estudiantes: ";
        cin >> cantidad;
    }

    for (int i = 0; i < cantidad; i++)
    {
        cout << endl;
        cout << "Estudiante " << i + 1 << ":" << endl;

        cout << "Ingrese el nombre (sin espacios): ";
        cin >> nombres[i];

        cout << "Ingrese la nota (0 a 20): ";
        cin >> notas[i];

        while (notas[i] < 0 || notas[i] > 20)
        {
            cout << "Error: la nota debe estar en el rango de 0 a 20." << endl;
            cout << "Ingrese nuevamente la nota: ";
            cin >> notas[i];
        }
    }

    hayDatos = true;

    cout << endl;
    cout << "Registro completado correctamente." << endl;
}

// FUNCION PARA MOSTRAR EL LISTADO COMPLETO
void mostrarListado(string nombres[], float notas[], int cantidad, bool hayDatos)
{
    if (hayDatos == false)
    {
        cout << endl;
        cout << "No existen estudiantes registrados todavia." << endl;
        return;
    }

    cout << endl;
    cout << "--- LISTADO COMPLETO ---" << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ". " << nombres[i] << " - " << notas[i] << endl;
    }
}

// FUNCION PARA CALCULAR Y MOSTRAR EL PROMEDIO
void mostrarPromedio(float notas[], int cantidad, bool hayDatos)
{
    if (hayDatos == false)
    {
        cout << endl;
        cout << "No existen estudiantes registrados todavia." << endl;
        return;
    }

    float suma = 0;
    float promedio;

    for (int i = 0; i < cantidad; i++)
    {
        suma = suma + notas[i];
    }

    promedio = suma / cantidad;

    cout << endl;
    cout << "--- PROMEDIO GENERAL ---" << endl;
    cout << "El promedio general es: " << promedio << endl;
}

// FUNCION PARA MOSTRAR LA NOTA MAYOR Y LA NOTA MENOR
void mostrarMayorMenor(string nombres[], float notas[], int cantidad, bool hayDatos)
{
    if (hayDatos == false)
    {
        cout << endl;
        cout << "No existen estudiantes registrados todavia." << endl;
        return;
    }

    float mayor = notas[0];
    float menor = notas[0];
    int posMayor = 0;
    int posMenor = 0;

    for (int i = 1; i < cantidad; i++)
    {
        if (notas[i] > mayor)
        {
            mayor = notas[i];
            posMayor = i;
        }

        if (notas[i] < menor)
        {
            menor = notas[i];
            posMenor = i;
        }
    }

    cout << endl;
    cout << "--- NOTA MAYOR Y NOTA MENOR ---" << endl;
    cout << "Nota mayor: " << mayor << " - Estudiante: " << nombres[posMayor] << endl;
    cout << "Nota menor: " << menor << " - Estudiante: " << nombres[posMenor] << endl;
}

// FUNCION PARA CONTAR APROBADOS Y REPROBADOS
void mostrarAprobadosReprobados(float notas[], int cantidad, bool hayDatos)
{
    if (hayDatos == false)
    {
        cout << endl;
        cout << "No existen estudiantes registrados todavia." << endl;
        return;
    }

    int aprobados = 0;
    int reprobados = 0;

    for (int i = 0; i < cantidad; i++)
    {
        if (notas[i] >= 14)
        {
            aprobados = aprobados + 1;
        }
        else
        {
            reprobados = reprobados + 1;
        }
    }

    cout << endl;
    cout << "--- APROBADOS Y REPROBADOS ---" << endl;
    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de reprobados: " << reprobados << endl;
}

// FUNCION PARA BUSCAR UN ESTUDIANTE POR NOMBRE
void buscarEstudiante(string nombres[], float notas[], int cantidad, bool hayDatos)
{
    if (hayDatos == false)
    {
        cout << endl;
        cout << "No existen estudiantes registrados todavia." << endl;
        return;
    }

    string buscado;
    bool encontrado = false;

    cout << endl;
    cout << "--- BUSCAR ESTUDIANTE ---" << endl;
    cout << "Ingrese el nombre del estudiante a buscar: ";
    cin >> buscado;

    for (int i = 0; i < cantidad; i++)
    {
        if (nombres[i] == buscado)
        {
            cout << endl;
            cout << "Estudiante encontrado." << endl;
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Nota: " << notas[i] << endl;
            cout << "Estado: " << estadoEstudiante(notas[i]) << endl;
            encontrado = true;
            break;
        }
    }

    if (encontrado == false)
    {
        cout << endl;
        cout << "El estudiante no fue encontrado." << endl;
    }
}

// FUNCION PARA DEVOLVER EL ESTADO DEL ESTUDIANTE
string estadoEstudiante(float nota)
{
    if (nota >= 14)
    {
        return "Aprobado";
    }
    else
    {
        return "Reprobado";
    }
}