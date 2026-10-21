// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 14/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void calcular(vector<string> nombres, int notas[5][3],
              vector<float> &promedios)
{
    for (int i = 0; i < 5; i++)
    {
        float suma = 0;

        for (int j = 0; j < 3; j++)
        {
            suma += notas[i][j];
        }

        promedios.push_back(suma / 3);
    }
}

void ordenar(vector<string> &nombres, int notas[5][3],
             vector<float> &promedios)
{
    string aux;
    float prom;
    int nota;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (nombres[j] > nombres[j + 1])
            {
                // Intercambiar nombres
                aux = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = aux;

                // Intercambiar las tres notas
                for (int k = 0; k < 3; k++)
                {
                    nota = notas[j][k];
                    notas[j][k] = notas[j + 1][k];
                    notas[j + 1][k] = nota;
                }

                // Intercambiar promedios
                prom = promedios[j];
                promedios[j] = promedios[j + 1];
                promedios[j + 1] = prom;
            }
        }
    }
}

void boletin(vector<string> nombres, int notas[5][3],
             vector<float> promedios)
{
    cout << "\nNombre\tNota 1\tNota 2\tNota 3\tPromedio" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << nombres[i] << "\t";

        for (int j = 0; j < 3; j++)
        {
            cout << notas[i][j] << "\t";
        }

        cout << promedios[i] << endl;
    }
}

int main()
{
    vector<string> nombres;
    vector<float> promedios;
    int notas[5][3];

    string nom;

    for (int i = 0; i < 5; i++)
    {
        cout << "Nombre del alumno " << i + 1 << ": ";
        cin >> nom;
        nombres.push_back(nom);

        for (int j = 0; j < 3; j++)
        {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }

    calcular(nombres, notas, promedios);
    ordenar(nombres, notas, promedios);
    boletin(nombres, notas, promedios);
}
