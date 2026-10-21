// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 07/10/2026
// Número de ejercicio: 1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenar(int matri[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matri[i][j] = rand() % 10 + 1;
            cout << matri[i][j] << "\t";
        }
        cout << endl;
    }
}

void buscar(int matri[100][100], int n, int m)
{
    int menor, mayor;
    int fila, col;
    int enc = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            menor = 1;
            mayor = 1;

            for (int k = 0; k < m; k++)
            {
                if (matri[i][k] < matri[i][j])
                    menor = 0;
            }

            for (int k = 0; k < n; k++)
            {
                if (matri[k][j] > matri[i][j])
                    mayor = 0;
            }

            if (menor == 1 && mayor == 1)
            {
                cout << "Punto de silla: " << matri[i][j] << endl;
                cout << "Fila: " << i + 1
                     << ", columna: " << j + 1 << endl;
                enc = 1;
            }
        }
    }

    if (enc == 0)
        cout << "No se encontro punto de silla" << endl;
}

int main()
{
    int matri[100][100];
    int n, m;

    srand(time(NULL));

    cout << "Filas y columnas: ";
    cin >> n >> m;

    llenar(matri, n, m);
    buscar(matri, n, m);
}
