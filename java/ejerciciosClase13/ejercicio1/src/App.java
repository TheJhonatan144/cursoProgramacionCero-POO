public class App {
    public static void main(String[] args) { // Metodo principal

        Persona persona1 = new Persona(); // Aqui creamos un objeto de tipo Persona llamado persona1

        persona1.nombre = "Eduardo"; // Asignamos un valor al atributo nombre del objeto

        persona1.edad = 21; // Asignamos un valor al atributo edad del objeto

        System.out.println("Nombre: " + persona1.nombre); // Mostramos el nombre en consola
        System.out.println("Edad: " + persona1.edad); // Mostrar la edad en consola
    }// Fin del metodo main
}// Fin de la clase App
