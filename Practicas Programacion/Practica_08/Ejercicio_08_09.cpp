// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 30/09/2026
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

void buscar(vector<string> contactos, string prefijo)
{
    for (int i = 0; i < contactos.size(); i++)
    {
        string inicio = contactos[i].substr(0, 3);

        if (inicio == prefijo)
            cout << contactos[i] << ", ";
    }
}

int main()
{
    vector<string> contactos = {"Marcelo", "Maria", "Martin", "Juan", "Marcos"};

    string prefijo;
    cout << "Prefijo de busqueda: ";
    cin >> prefijo;

    cout << "Resultados: ";
    buscar(contactos, prefijo);

    return 0;
}