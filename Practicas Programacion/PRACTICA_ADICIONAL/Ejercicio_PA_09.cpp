// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 27/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void buscar(vector<string> paises, int medallas[5][3])
{
    string nombre;
    bool encontrado = false;

    cout << "Ingrese un pais: ";
    cin >> nombre;

    for (int i = 0; i < 5; i++)
    {
        if (nombre == paises[i])
        {
            int total = 0;

            cout << "Oros: " << medallas[i][0] << endl;
            cout << "Platas: " << medallas[i][1] << endl;
            cout << "Bronces: " << medallas[i][2] << endl;

            total = medallas[i][0] + medallas[i][1] + medallas[i][2];

            cout << "Total: " << total << endl;

            encontrado = true;
        }
    }

    if (encontrado == false)
    {
        cout << "Pais no encontrado" << endl;
    }
}

void masOros(vector<string> paises, int medallas[5][3])
{
    int mayor = medallas[0][0];

    for (int i = 1; i < 5; i++)
    {
        if (medallas[i][0] > mayor)
        {
            mayor = medallas[i][0];
        }
    }

    cout << "Pais(es) con mas medallas de oro:" << endl;

    for (int i = 0; i < 5; i++)
    {
        if (medallas[i][0] == mayor)
        {
            cout << paises[i] << " con " << mayor << " oros" << endl;
        }
    }
}

int main()
{
    vector<string> paises = {"Bolivia", "Brasil", "Argentina", "Chile", "Peru"};

    int medallas[5][3] = {
        {2, 3, 1},
        {5, 2, 4},
        {5, 4, 2},
        {1, 2, 3},
        {3, 1, 2}};

    buscar(paises, medallas);

    masOros(paises, medallas);

    return 0;
}
