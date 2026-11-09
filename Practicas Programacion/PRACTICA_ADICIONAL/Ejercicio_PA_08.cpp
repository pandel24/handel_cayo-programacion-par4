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
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 4;

void intercambiar(int matriz[N][N])
{
    int peor = 0, mejor = 0;
    float menor = 1000, mayor = 0;

    for (int j = 0; j < N; j++)
    {
        int suma = 0;

        for (int i = 0; i < N; i++)
        {
            suma += matriz[i][j];
        }

        float promedio = (float)suma / N;

        if (promedio < menor)
        {
            menor = promedio;
            peor = j;
        }

        if (promedio > mayor)
        {
            mayor = promedio;
            mejor = j;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int aux = matriz[i][peor];
        matriz[i][peor] = matriz[i][mejor];
        matriz[i][mejor] = aux;
    }
}

int main()
{
    int matriz[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    intercambiar(matriz);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
