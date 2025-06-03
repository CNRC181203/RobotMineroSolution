#include "pch.h"
using namespace System;
using namespace System::Collections::Generic;
using namespace RobotMineroController;
using namespace RobotMineroModel;

namespace RobotMineroConsoleApp {
    public ref class ConsoleApp {
    public:
        // Función para mostrar el menú
        static void ShowMenu() {
            Console::WriteLine("\n=== Sistema de Gestión de Usuarios ===");
            Console::WriteLine("1. Ingresar nuevo usuario");
            Console::WriteLine("2. Consultar todos los usuarios");
            Console::WriteLine("3. Actualizar usuario");
            Console::WriteLine("4. Eliminar usuario");
            Console::WriteLine("5. Salir");
            Console::Write("Seleccione una opción: ");
        }

        [STAThreadAttribute] // Esto es necesario para la compatibilidad con .NET
        static int Main(array<String^>^ args) {
            int opcion;
            do {
                ShowMenu();
                opcion = Int32::Parse(Console::ReadLine());
                /*if (!Int32::TryParse(input, opcion)) {
                    Console::WriteLine("Opción inválida. Intente nuevamente.");
                    continue; // Repite el menú
                }*/

                switch (opcion) {
                case 1: { // Ingresar nuevo usuario
                    Console::WriteLine("\n=== Ingresar Nuevo Usuario ===");
                    Console::Write("ID: ");
                    int id = Int32::Parse(Console::ReadLine());
                   // Console::Write("Contraseña: ");
                    //String^ contraseha = Console::ReadLine();
                    Console::Write("Nombre: ");
                    String^ nombre = Console::ReadLine();
                    Console::Write("Apellido: ");
                    String^ apellido = Console::ReadLine();
                    Console::Write("Salario: ");
                    double salario = Double::Parse(Console::ReadLine());
                    Console::Write("Cargo (0=Trabajador de Campo, 1=Operario, 2=Ing. Ambiental, 3= Supervisor): ");
                    int cargoType = Int32::Parse(Console::ReadLine());
                    String^ cargo = "";

                    switch (cargoType) {
                    case 0: cargo = "Trabajador de Campo"; break;
                    case 1: cargo = "Operario"; break;
                    case 2: cargo = "Ing. Ambiental"; break;
                    case 3: cargo = "Supervisor"; break;
                    default:
                        Console::WriteLine("Cargo no válido.");
                        break;
                    }

                    Usuario^ usuario = gcnew Usuario(id, nombre, apellido, salario, cargo);
                    Controller::AgregarUsuario(usuario); // Agregar el usuario al sistema
                    Console::WriteLine("Usuario registrado exitosamente.");
                    break;
                }
                case 2: { // Consultar todos los usuarios
                    Console::WriteLine("\n=== Consultar Todos los Usuarios ===");
                    //List<Usuario^>^ usuarios = Controller::ConsultarUsuario();
                    /*for each (Usuario ^ usuario in usuarios) {
                        Console::WriteLine("ID: {0}, Nombre: {1} {2}, Cargo: {3}, Salario: S/.{4:F2}",
                            usuario->Id, usuario->Nombre, usuario->Apelllido, usuario->Cargo, usuario->Salario);
                    }*/
                    break;
                }
                case 3: { // Actualizar usuario
                    Console::WriteLine("\n=== Actualizar Usuario ===");
                    Console::Write("ID del usuario a actualizar: ");
                    int id = Int32::Parse(Console::ReadLine());
                    //List<Usuario^>^ usuarios = Controller::ConsultarUsuario();
                    Usuario^ usuario = nullptr;

                    // Buscar el usuario por ID
                    /*for each (Usuario ^ u in usuarios) {
                        if (u->Id == id) {
                            usuario = u;
                            break;
                        }
                    }*/

                    if (usuario != nullptr) {
                        Console::Write("Nuevo Cargo (0=Operario, 1=Supervisor, 2=Gerente): ");
                        int cargoType = Int32::Parse(Console::ReadLine());
                        String^ nuevoCargo = "";
                        switch (cargoType) {
                        case 0: nuevoCargo = "Operario"; break;
                        case 1: nuevoCargo = "Supervisor"; break;
                        case 2: nuevoCargo = "Gerente"; break;
                        default:
                            Console::WriteLine("Cargo no válido.");
                            break;
                        }

                        // Actualizar el cargo del usuario
                        usuario->Cargo = nuevoCargo;
                        Controller::ActualizarUsuario(usuario);
                        Console::WriteLine("Usuario actualizado exitosamente.");
                    }
                    else {
                        Console::WriteLine("Usuario no encontrado.");
                    }
                    break;
                }
                case 4: { // Eliminar usuario
                    Console::WriteLine("\n=== Eliminar Usuario ===");
                    Console::Write("ID del usuario a eliminar: ");
                    int id = Int32::Parse(Console::ReadLine());
                    int result = Controller::EliminarUsuario(id);
                    if (result == 1) {
                        Console::WriteLine("Usuario eliminado exitosamente.");
                    }
                    else {
                        Console::WriteLine("Usuario no encontrado.");
                    }
                    break;
                }
                case 5: { // Salir
                    Console::WriteLine("\nSaliendo del programa...");
                    break;
                }
                default: {
                    Console::WriteLine("\nOpción no válida.");
                    break;
                }
                }
            } while (opcion != 5); // Continuar hasta que el usuario seleccione "Salir"

            return 0;
        }
    };
}

