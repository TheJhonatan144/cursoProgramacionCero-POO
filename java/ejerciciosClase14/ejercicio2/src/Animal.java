/*
Descipcion:
    Clase padre que representa un animal genera.
    Aqui colocamos lo que todos los animales tienen en comun.
*/

public class Animal {
    // Atributos comunes para todos los animes
    private String nombre;
    private int edad;

    // Constructor de la clase Animal
    public Animal(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    // Metodo para mostrar informacion basica
    public void mostrarInfo() {
        System.out.println("Nombre: " + nombre);
        System.out.println("Edad:" + edad);
    }

    // Metodo que luego sera sobreescrito por las subclases
    public void hacerSonido() {
        System.out.println("El animal hace un sonido.");
    }
}
