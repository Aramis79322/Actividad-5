/*
 ====================================================================
 Materia: Laboratorio de Programacion (LPR) — 5
 Archivo: src/main.cpp
 Actividad 5: Modelado de datos con Structs y Punteros
 Profesor: Prof. Mansilla Muñoz York Elías
 Estudiante: Aramis Demaria
 ====================================================================
*/
#include <iostream>
#include <cstring>
using namespace std;

struct EntidadProyecto {
    int id;
    char nombre[50];
    float metrica; // lecturas de sensores, consumo, avance, etc.
};

void cargarDatos(EntidadProyecto* ptr);

int main() {
    EntidadProyecto miEntidad = {0, "Vacio - Aramis Demaria", 0.0f};
    cout << "=====================================================" << endl;
    cout << " MODELADO STRUCT - ESTUDIANTE: Aramis Demaria " << endl;
    cout << "=====================================================" << endl;
    cargarDatos(&miEntidad);
    cout << "\n=== DATOS VERIFICADOS EN LA MEMORIA RAM ===" << endl;
    cout << "ID Registrado: " << miEntidad.id << endl;
    cout << "Nombre Registrado: " << miEntidad.nombre << endl;
    cout << "Metrica Guardada: " << miEntidad.metrica << endl;
    cout << "Direccion RAM Hexadecimal: " << &miEntidad << endl;
    cout << "=====================================================" << endl;
    return 0;
}

void cargarDatos(EntidadProyecto* ptr) {
    cout << "\n--- INGRESO DE DATOS MEDIANTE OPERADOR FLECHA ---" << endl;
    cout << "=> Ingrese el ID de la entidad (entero): ";
    cin >> ptr->id;
    cin.ignore(); // Limpia \n remanente
    cout << "=> Ingrese el Nombre o Descripcion: ";
    cin.getline(ptr->nombre, 50);
    cout << "=> Ingrese la Metrica de Operacion (decimal/float): ";
    cin >> ptr->metrica;
}
