/*
Descripcion:
    Clase padre que representa una hormiga general
    Aqui colocamos los atributos y metodos comunes
*/

public class Hormiga {
    // Atributos privados para mantener encapsulamiento
    private int id;
    private String tipo;
    private String estado;

    // Constructor
    public Hormiga(int id, String tipo) {
        this.id = id;
        this.tipo = tipo;
        this.estado = "VIVA";
    }

    // Getters
    public int getId() {
        return id;
    }

    public String getTipo() {
        return tipo;
    }

    public String getEstado() {
        return estado;
    }

    // Setters para cambiar el estado
    public void setEstado(String estado) {
        this.estado = estado;
    }

    // Metodo que luego sera sobreescrito
    public void mostrarAccion() {
        System.out.println("La hormiga realiza una accion general.");
    }

    // Metodo para mostrar Informacion
    public void mostrarInfo() {
        System.out.println("ID: " + id + " | Tipo: " + tipo + " | Estado: " + estado);
    }
}
