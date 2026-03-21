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

// ==========================================================
// PROTOTIPOS DE FUNCIONES
// Aquí puedes remarcar algo importante en clase:
// una buena solución NO mete toda la lógica en main.
// Desde el inicio ya se nota modularidad.
// ==========================================================
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
    // Arreglos paralelos:
    // nombres[i] y notas[i] pertenecen al mismo estudiante.
    // Aquí puedes explicar que la relación se mantiene por posición.
    string nombres[20];
    float notas[20];

    // cantidad guarda cuántos estudiantes reales se ingresaron.
    // Ojo: el arreglo tiene capacidad máxima 20, pero no siempre se usan los 20.
    int cantidad = 0;

    // Esta variable booleana sirve para controlar si ya existen datos cargados.
    // Es muy útil para evitar mostrar información vacía o hacer cálculos sin registros.
    bool hayDatos = false;

    int opcion;

    // Menú repetitivo:
    // Esto cumple con la lógica típica de examen integrador de Programación I:
    // el usuario puede seguir usando el sistema hasta elegir salir.
    do
    {
        opcion = mostrarMenu();

        switch (opcion)
        {
        case 1:
            // Registrar datos
            registrarEstudiantes(nombres, notas, cantidad, hayDatos);
            break;

        case 2:
            // Mostrar todo el listado
            mostrarListado(nombres, notas, cantidad, hayDatos);
            break;

        case 3:
            // Calcular promedio general
            mostrarPromedio(notas, cantidad, hayDatos);
            break;

        case 4:
            // Hallar nota mayor y menor
            mostrarMayorMenor(nombres, notas, cantidad, hayDatos);
            break;

        case 5:
            // Contar aprobados y reprobados
            mostrarAprobadosReprobados(notas, cantidad, hayDatos);
            break;

        case 6:
            // Buscar estudiante por nombre
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

// ==========================================================
// FUNCION PARA MOSTRAR EL MENU
// Aquí puedes decir:
// esta función no solo imprime opciones, también valida.
// Un menú sin validación es incompleto.
// ==========================================================
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

    // Validación de rango del menú.
    // Error frecuente: aceptar cualquier opción y que el programa se rompa.
    while (opcion < 1 || opcion > 7)
    {
        cout << "Error: opcion invalida. Ingrese una opcion entre 1 y 7: ";
        cin >> opcion;
    }

    return opcion;
}

// ==========================================================
// FUNCION PARA REGISTRAR ESTUDIANTES Y NOTAS
// Esta es una de las funciones principales del sistema.
// Aquí se validan datos y se llenan los arreglos.
// ==========================================================
void registrarEstudiantes(string nombres[], float notas[], int &cantidad, bool &hayDatos)
{
    cout << endl;
    cout << "--- REGISTRO DE ESTUDIANTES ---" << endl;

    cout << "Ingrese la cantidad de estudiantes (1 a 20): ";
    cin >> cantidad;

    // Validación de cantidad.
    // Aquí puedes remarcar que no basta con pedir el dato:
    // hay que controlar que esté dentro del rango permitido.
    while (cantidad < 1 || cantidad > 20)
    {
        cout << "Error: la cantidad debe estar entre 1 y 20." << endl;
        cout << "Ingrese nuevamente la cantidad de estudiantes: ";
        cin >> cantidad;
    }

    // Recorrido hasta la cantidad REAL ingresada, no hasta 20.
    for (int i = 0; i < cantidad; i++)
    {
        cout << endl;
        cout << "Estudiante " << i + 1 << ":" << endl;

        // Para este nivel se acepta leer nombre sin espacios.
        // No hace falta complicar más la solución.
        cout << "Ingrese el nombre (sin espacios): ";
        cin >> nombres[i];

        cout << "Ingrese la nota (0 a 20): ";
        cin >> notas[i];

        // Validación del rango de nota.
        // Este era un punto clave del examen.
        while (notas[i] < 0 || notas[i] > 20)
        {
            cout << "Error: la nota debe estar en el rango de 0 a 20." << endl;
            cout << "Ingrese nuevamente la nota: ";
            cin >> notas[i];
        }
    }

    // Activamos la bandera para indicar que ya hay información registrada.
    // Muy buena práctica para controlar el estado del programa.
    hayDatos = true;

    cout << endl;
    cout << "Registro completado correctamente." << endl;
}

// ==========================================================
// FUNCION PARA MOSTRAR EL LISTADO COMPLETO
// Aquí puedes reforzar el uso correcto de arreglos paralelos.
// ==========================================================
void mostrarListado(string nombres[], float notas[], int cantidad, bool hayDatos)
{
    // Si no hay datos, no tiene sentido intentar mostrar nada.
    if (hayDatos == false)
    {
        cout << endl;
        cout << "No existen estudiantes registrados todavia." << endl;
        return;
    }

    cout << endl;
    cout << "--- LISTADO COMPLETO ---" << endl;

    // Recorremos solo hasta cantidad.
    // Error frecuente: recorrer siempre todo el arreglo aunque no esté lleno.
    for (int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ". " << nombres[i] << " - " << notas[i] << endl;
    }
}

// ==========================================================
// FUNCION PARA CALCULAR Y MOSTRAR EL PROMEDIO
// Aquí puedes explicar el patrón clásico:
// acumular primero, dividir después.
// ==========================================================
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

    // Acumulación de todas las notas
    for (int i = 0; i < cantidad; i++)
    {
        suma = suma + notas[i];
    }

    // Cálculo final del promedio
    promedio = suma / cantidad;

    cout << endl;
    cout << "--- PROMEDIO GENERAL ---" << endl;
    cout << "El promedio general es: " << promedio << endl;
}

// ==========================================================
// FUNCION PARA MOSTRAR LA NOTA MAYOR Y LA NOTA MENOR
// Aquí la idea importante es:
// se toma como referencia el primer elemento y luego se compara.
// ==========================================================
void mostrarMayorMenor(string nombres[], float notas[], int cantidad, bool hayDatos)
{
    if (hayDatos == false)
    {
        cout << endl;
        cout << "No existen estudiantes registrados todavia." << endl;
        return;
    }

    // Inicializamos con el primer dato real.
    // Esto evita errores al comparar.
    float mayor = notas[0];
    float menor = notas[0];

    // Guardamos también las posiciones, no solo los valores.
    // Esto permite después mostrar a qué estudiante pertenece cada nota.
    int posMayor = 0;
    int posMenor = 0;

    // Empezamos desde 1 porque la posición 0 ya se usó como referencia inicial.
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

// ==========================================================
// FUNCION PARA CONTAR APROBADOS Y REPROBADOS
// Aquí se trabaja con contadores y condiciones.
// Muy patrón de examen.
// ==========================================================
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
        // Regla de aprobación del problema:
        // si la nota es mayor o igual a 14, aprueba.
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

// ==========================================================
// FUNCION PARA BUSCAR UN ESTUDIANTE POR NOMBRE
// Aquí puedes explicar búsqueda secuencial:
// comparar uno por uno hasta encontrar coincidencia.
// ==========================================================
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

    // Búsqueda secuencial
    for (int i = 0; i < cantidad; i++)
    {
        if (nombres[i] == buscado)
        {
            cout << endl;
            cout << "Estudiante encontrado." << endl;
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Nota: " << notas[i] << endl;

            // Aquí se reutiliza otra función en lugar de repetir la lógica.
            // Eso también es buena modularidad.
            cout << "Estado: " << estadoEstudiante(notas[i]) << endl;

            encontrado = true;

            // Como ya lo encontramos, ya no hace falta seguir recorriendo.
            break;
        }
    }

    if (encontrado == false)
    {
        cout << endl;
        cout << "El estudiante no fue encontrado." << endl;
    }
}

// ==========================================================
// FUNCION PARA DEVOLVER EL ESTADO DEL ESTUDIANTE
// Función pequeña pero útil.
// Aquí puedes decir:
// cuando una regla se repite, conviene meterla en una función.
// ==========================================================
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