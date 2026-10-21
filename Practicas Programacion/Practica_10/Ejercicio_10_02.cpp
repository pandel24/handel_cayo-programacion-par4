// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 14/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenar(vector<int> &puntos, int n)
{
    for (int i = 0; i < n; i++)
    {
        puntos.push_back(rand() % 100 + 1);
    }
}

void ordenar(vector<int> &puntos)
{
    int aux;

    for (int i = 0; i < puntos.size() - 1; i++)
    {
        for (int j = 0; j < puntos.size() - 1 - i; j++)
        {
            if (puntos[j] < puntos[j + 1])
            {
                aux = puntos[j];
                puntos[j] = puntos[j + 1];
                puntos[j + 1] = aux;
            }
        }
    }
}

void podio(vector<int> puntos)
{
    for (int i = 0; i < 3 && i < puntos.size(); i++)
    {
        cout << i + 1 << " lugar: " << puntos[i] << endl;
    }
}

int main()
{
    vector<int> puntos;
    int n;

    srand(time(NULL));

    cout << "Cantidad de jugadores: ";
    cin >> n;

    llenar(puntos, n);
    ordenar(puntos);

    cout << "Puntuaciones ordenadas:" << endl;

    for (int i = 0; i < puntos.size(); i++)
        cout << puntos[i] << " ";

    cout << endl;
    podio(puntos);
}
