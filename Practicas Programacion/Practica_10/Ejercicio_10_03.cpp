// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 14/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenar(vector<float> &tiempos, int n)
{
    for (int i = 0; i < n; i++)
    {
        float t = 10 + (rand() % 1001) / 100.0;
        tiempos.push_back(t);
    }
}

void mostrar(vector<float> tiempos)
{
    for (int i = 0; i < tiempos.size(); i++)
        cout << tiempos[i] << " ";

    cout << endl;
}

void ordenar(vector<float> &tiempos)
{
    float aux;
    int j;

    for (int i = 1; i < tiempos.size(); i++)
    {
        aux = tiempos[i];
        j = i - 1;

        while (j >= 0 && tiempos[j] > aux)
        {
            tiempos[j + 1] = tiempos[j];
            j--;
        }

        tiempos[j + 1] = aux;
    }
}

int main()
{
    vector<float> tiempos;
    int n;

    srand(time(NULL));

    cout << "Cantidad de corredores: ";
    cin >> n;

    llenar(tiempos, n);

    cout << "Antes de ordenar:" << endl;
    mostrar(tiempos);

    ordenar(tiempos);

    cout << "Despues de ordenar:" << endl;
    mostrar(tiempos);
}
