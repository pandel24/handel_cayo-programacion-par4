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
bool libre(int matriz[5][5], int n)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 2;
        }
    }
    for (int k = 0; k < 4; k++)
    {
        if (matriz[n][k] == 0 && matriz[n][k + 1] == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    srand(time(0));
    int matriz[5][5];
    int nu = 0;
    cin >> nu;
    if (libre(matriz, nu))
    {
        cout << "hay asiento libre en la fila : " << nu << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}