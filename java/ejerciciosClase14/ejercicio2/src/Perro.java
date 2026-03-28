/*
Descripcion:
    Clase hija que hereda de Animal.
    Representa a un perro dentro del refugio
*/

public class Perro extends Animal {
    // Constructor de Perro
    public Perro(String nombre, int edad) {
        // Llamos al constuctor de la clase padre
        super(nombre, edad);
    }

    // Sobreescribimos el metodo hacerSonido()
    @Override
    public void hacerSonido() {
        System.out.println("Guau guau");
    }

}
