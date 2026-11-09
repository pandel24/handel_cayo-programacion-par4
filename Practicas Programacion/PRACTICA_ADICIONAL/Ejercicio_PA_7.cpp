// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 27/10/2026
// Número de ejercicio: 1
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <ctime>
using namespace std;
void nata(float matriz[4][5])
{

    int tiem = 0;
    int prom = 0;
    int mejtie = 0;
    int na = 0;
    int mpro = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = 20 + rand() % 31;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        float menor = 100000;

        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }

        cout << menor << endl;
    }
    for (int j = 0; j < 5; j++)
    {
        float prom = 0;

        for (int i = 0; i < 4; i++)
        {
            prom += matriz[i][j];
        }

        prom = prom / 4;
        if (prom < mpro)
        {
            mpro = prom;
            na = j;
        }
    }

    cout << "Nadador con mejor promedio: " << na << endl;
    cout << "Promedio: " << mpro << " segundos" << endl;
}

int main()
{
    srand(time(0));

    float matriz[4][5];

    nata(matriz);
}
