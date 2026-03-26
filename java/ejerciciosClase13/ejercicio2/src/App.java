/*
Clase, objeto y atributos

Que archivos crear: crear estos 2 archivos
Estudiante.java
App.java

Titulo del ejercicio: Ejercicio1
Autor: Jhontan Torres

Enunciado:
    Crear una clase llamada Estudiante con los atributos nombre, edad y carrera.
    Luego, desde la clase principal, crear dos objetos y mostrar sus datos en
    consola.
*/

public class App {
    public static void main(String[] args) throws Exception {

        Estudiante estudiante1 = new Estudiante(); // Aqui cramos un primer objeto de tipo Estudiante

        estudiante1.nombre = "Ana"; // Asignamos el valor "Ana" al atributo nombre del objeto estudiante1
        estudiante1.edad = 20; // Asignamos el valor 20 al atributo edad del objeto estudiante1
        estudiante1.carrera = "Software"; // Asignamos el valor "Software" al atributo carrera del objeto estudiante1

        Estudiante estudiante2 = new Estudiante(); // Aqui creamos el segundo objeto de tipo Estudiante

        estudiante2.nombre = "Luis"; // Asignamos el valor "Luis" al atributo nombre del objeto estudiante2
        estudiante2.edad = 22; // Asignamos el valor 22 al atributo edad del objeto estudiante2
        estudiante2.carrera = "Computacion"; // Asignamos el valor "Computacion" al atributo carrera del objeto
                                             // estudiante2

        System.out.println("===ESTUDIANTE 1 ===="); // Imprimimos un titulo para el primer estudiante
        System.out.println("Nombre: " + estudiante1.nombre); // Mostramos el nombre del primer estudiante
        System.out.println("Edad: " + estudiante1.edad); // Mostramos la edad del primero estudiante
        System.out.println("Carrera: " + estudiante1.carrera); // Mostramos la carrea del primer estudiante

        System.out.println("===ESTUDIANTE 2 ===="); // Imprimimos un titulo para el segundo estudiante
        System.out.println("Nombre: " + estudiante2.nombre); // Mostramos el nombre del segundo estudiante
        System.out.println("Edad: " + estudiante2.edad); // Mostramos la edad del segundo estudiante
        System.out.println("Carrera: " + estudiante2.carrera); // Mostramos la carrea del segundo estudiante
    }
}
