import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Mascota> mascotas = new ArrayList<>();
        int opcion = 0;

        do {
            try {
                System.out.println("\n===== MENU DE MASCOTAS =====");
                System.out.println("1. Registrar mascota");
                System.out.println("2. Mostrar mascotas");
                System.out.println("3. Ejecutar sonido de una mascota");
                System.out.println("4. Buscar mascota por nombre");
                System.out.println("5. Salir");
                System.out.print("Seleccione una opcion: ");
                opcion = sc.nextInt();
                sc.nextLine();

                switch (opcion) {
                    case 1:
                        registrarMascota(sc, mascotas);
                        break;
                    case 2:
                        mostrarMascotas(mascotas);
                        break;
                    case 3:
                        ejecutarSonido(sc, mascotas);
                        break;
                    case 4:
                        buscarPorNombre(sc, mascotas);
                        break;
                    case 5:
                        System.out.println("Saliendo del sistema...");
                        break;
                    default:
                        System.out.println("Opcion invalida.");
                }
            } catch (InputMismatchException e) {
                System.out.println("Error: ingreso invalido.");
                sc.nextLine();
            }
        } while (opcion != 5);

        sc.close();
    }

    public static void registrarMascota(Scanner sc, ArrayList<Mascota> mascotas) {
        try {
            System.out.println("\n--- Registrar Mascota ---");
            System.out.println("Tipo de mascota:");
            System.out.println("1. Perro");
            System.out.println("2. Gato");
            System.out.println("3. Ave");
            System.out.print("Seleccione una opcion: ");
            int tipo = sc.nextInt();
            sc.nextLine();

            System.out.print("Ingrese id: ");
            int id = sc.nextInt();
            sc.nextLine();

            System.out.print("Ingrese nombre: ");
            String nombre = sc.nextLine();

            System.out.print("Ingrese edad: ");
            int edad = sc.nextInt();
            sc.nextLine();

            if (id <= 0) {
                System.out.println("Error: el id debe ser mayor a 0.");
                return;
            }

            if (nombre.trim().isEmpty()) {
                System.out.println("Error: el nombre no puede estar vacio.");
                return;
            }

            if (edad <= 0) {
                System.out.println("Error: la edad debe ser mayor a 0.");
                return;
            }

            Mascota nuevaMascota;

            switch (tipo) {
                case 1:
                    nuevaMascota = new Perro(id, nombre, edad);
                    break;
                case 2:
                    nuevaMascota = new Gato(id, nombre, edad);
                    break;
                case 3:
                    nuevaMascota = new Ave(id, nombre, edad);
                    break;
                default:
                    System.out.println("Tipo de mascota invalido.");
                    return;
            }

            mascotas.add(nuevaMascota);
            System.out.println("Mascota registrada correctamente.");

        } catch (InputMismatchException e) {
            System.out.println("Error: entrada invalida.");
            sc.nextLine();
        }
    }

    public static void mostrarMascotas(ArrayList<Mascota> mascotas) {
        System.out.println("\n--- Lista de Mascotas ---");

        if (mascotas.isEmpty()) {
            System.out.println("No hay mascotas registradas.");
            return;
        }

        for (Mascota mascota : mascotas) {
            mascota.mostrarInfo();
            System.out.println("Tipo: " + mascota.getClass().getSimpleName());
            System.out.println("Sonido: " + mascota.hacerSonido());
            System.out.println("----------------------------");
        }
    }

    public static void ejecutarSonido(Scanner sc, ArrayList<Mascota> mascotas) {
        if (mascotas.isEmpty()) {
            System.out.println("No hay mascotas registradas.");
            return;
        }

        System.out.print("\nIngrese el id de la mascota: ");
        int idBuscado = sc.nextInt();
        sc.nextLine();

        for (Mascota mascota : mascotas) {
            if (mascota.getId() == idBuscado) {
                System.out.println("Mascota encontrada: " + mascota.getNombre());
                System.out.println("Sonido: " + mascota.hacerSonido());
                return;
            }
        }

        System.out.println("Mascota no encontrada.");
    }

    public static void buscarPorNombre(Scanner sc, ArrayList<Mascota> mascotas) {
        if (mascotas.isEmpty()) {
            System.out.println("No hay mascotas registradas.");
            return;
        }

        System.out.print("\nIngrese el nombre de la mascota: ");
        String nombreBuscado = sc.nextLine();

        for (Mascota mascota : mascotas) {
            if (mascota.getNombre().equalsIgnoreCase(nombreBuscado)) {
                System.out.println("Mascota encontrada:");
                mascota.mostrarInfo();
                System.out.println("Tipo: " + mascota.getClass().getSimpleName());
                System.out.println("Sonido: " + mascota.hacerSonido());
                return;
            }
        }

        System.out.println("Mascota no encontrada.");
    }
}