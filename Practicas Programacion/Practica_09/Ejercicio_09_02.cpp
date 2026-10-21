// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 07/10/2026
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
void llenar(int matri[100][100], int a, int mayor, int menor)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            matri[i][j] = rand() % (mayor - menor + 1) + menor;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << matri[i][j];
        }
        cout << endl;
    }
}
void calcular(int matri[100][100], int a)
{
    int suma = 0, producto = 1, mayor = matri[0][0];
    int fil = 0, col = 0;
    float promedio = 0;

    for (int i = 0; i < a; i++)
    {
        suma += matri[i][a - 1];
        producto *= matri[a - 1][i];

        for (int j = 0; j < a; j++)
        {
            promedio += matri[i][j];

            if (matri[i][j] > mayor)
            {
                mayor = matri[i][j];
                fil = i;
                col = j;
            }
        }
    }

    cout << "Suma ultima columna: " << suma << endl;
    cout << "Producto ultima fila: " << producto << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Posicion: fila " << fil + 1
         << ", columna " << col + 1 << endl;
    cout << "Promedio: " << promedio / (a * a) << endl;
}

int main()
{
    int matri[100][100];
    srand(time(NULL));

    llenar(matri, 3, 6, 0);
    calcular(matri, 3);
}