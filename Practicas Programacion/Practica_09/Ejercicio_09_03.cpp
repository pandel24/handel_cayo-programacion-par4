// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 07/10/2026
// Número de ejercicio: 1
#include <iostream>
using namespace std;

void llenar(int matri[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matri[i][j] = 2 * i + j + 1;
            cout << matri[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int matri[100][100];
    int n = 5;

    llenar(matri, n);
}
