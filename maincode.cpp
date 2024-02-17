#include <iostream>
#include <string>
using namespace std;

// Definición de la clase Materia
class Materia {
public:
    string nombre;
    float calificacion;
};

// Definición de la clase Unidad
class Unidad {
public:
    string nombre;
    Materia materias[4];

    // Método para ingresar las calificaciones de las materias
    void ingresarCalificaciones() {
        cout << "Ingrese las calificaciones para la unidad " << nombre << endl;
        for (int i = 0; i < 4; ++i) {
            cout << "Calificación para la materia " << materias[i].nombre << ": ";
            cin >> materias[i].calificacion;
        }
    }
};

int main() {
    // Definir las materias predefinidas
    string nombresMaterias[4] = {"Matemáticas", "Ciencias", "Historia", "Literatura"};

    Unidad unidades[4];

    // Asignar nombres a las unidades
    for (int i = 0; i < 4; ++i) {
        unidades[i].nombre = "Unidad " + i + 1;
        // Asignar nombres a las materias para cada unidad
        for (int j = 0; j < 4; ++j) {
            unidades[i].materias[j].nombre = nombresMaterias[j];
        }
    }

    // Ingresar calificaciones para cada unidad
    for (int i = 0; i < 4; ++i) {
        unidades[i].ingresarCalificaciones();
    }

    // Mostrar las calificaciones ingresadas para cada unidad y materia
    for (int i = 0; i < 4; ++i) {
        cout << "Calificaciones para la Unidad " << i + 1 << ":" << endl;
        for (int j = 0; j < 4; ++j) {
            cout << "  " << unidades[i].materias[j].nombre << ": " << unidades[i].materias[j].calificacion << endl;
        }
    }

    return 0;
}


Prueba git... 
