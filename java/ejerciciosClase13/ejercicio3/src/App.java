/*
Titulo: Ejercicio 2 - Constructor y metodos
Autor: Jhonatan Torres
Enunciado:
    Crear una clase llamda Producto con los atributos nombre, precio y stock.
    La clase debe tener un constructor, un metodo para mostrar informacion
    y un metodo para calcular el valor total del inventario.
*/

public class App {
    public static void main(String[] args) throws Exception { // Aqui comienza el metodo main
        Producto producto1 = new Producto("Mouse", 15.50, 10); // Creamos el primer objeto usando el constructor
        Producto producto2 = new Producto("Teclado", 25.00, 5); // Creamos el segundo objeto usando el constructo.

        System.out.println("===PRODUCTO 1==="); // Mostramos un titulo para el primero producto
        producto1.mostrarInfo(); // Llamos al metodo mostrarInfo del primer objeto
        System.out.println("Valor total en inventario: " + producto1.calcularValorInventario()); // Mostramos el
                                                                                                 // resultado
        // del metodo calcularValorInventario

        System.out.println(); // Imprimos una linea en blanco para separar la salida

        System.out.println("===PRODUCTO 2===");// Mostramos un titulo para el segundo producto
        producto2.mostrarInfo(); // Llamos al metodo mostrarInfo del segundo objeto
        System.out.println("Valor total en inventario: " + producto2.calcularValorInventario()); // Mostramos el
                                                                                                 // resultado
        // del metodo calcularValorInventario

    } // Aqui termina el metodo main
} // Aqui terminar la clase App
