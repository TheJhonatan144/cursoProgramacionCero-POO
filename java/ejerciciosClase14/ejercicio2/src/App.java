/*
Ejercicio 2 - Sistema simple de animales del refugio
Autor: Jhonatan Torres
Fecha: 27 de marzo de 2026

Enunciado: 
    Desarrollar un programa en Java que permoita representar animales dentro
    de un refugio
    
    El sistema debe contar con:
        - una clase base llamada Animal
        - dos subclases llamdas Perro y Gato
        - un metodo llamdo hacerSonido() que se comporte de manera distinta
        en cada subclase
        - una coleccion que almacene varios animales
        - un recorrido que muestr la informacion y el sonido de cada animal
*/

import java.util.ArrayList;

public class App {
    public static void main(String[] args) throws Exception {
        // Creamos una lista de tipo Animal
        ArrayList<Animal> animales = new ArrayList<>();

        // Agregamos objetos de distinta subclase
        animales.add(new Perro("Firulais", 3));
        animales.add(new Gato("Nala", 2));
        animales.add(new Perro("Toby", 7));

        // Recorremos la lista
        for (Animal animal : animales) {
            animal.mostrarInfo();
            animal.hacerSonido();
            System.out.println("-------------------");
        }
    }
}
