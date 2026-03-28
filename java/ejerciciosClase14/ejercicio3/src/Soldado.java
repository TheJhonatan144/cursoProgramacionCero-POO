/*
Descripcion:
    Clase hija que representa una hormiga soldado
*/

public class Soldado extends Hormiga {
    public Soldado(int id) {
        // Lamamos al constructor de la clase padre
        super(id, "Soldado");
    }

    @Override
    public void mostrarAccion() {
        System.out.println("La hormiga soldado protege el hormiguero");
    }

}
