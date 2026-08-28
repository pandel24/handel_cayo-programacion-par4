// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 21/08/2026
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
    int n;
    int m;
    cout << "ingrese los numeros a seguir : ";
    cin >> n >> m;
    if (n > m)
    {
        for (int i = n; i >= m; i--)
        {
            cout << i << " ";
        }
    }
    if (n < m)
    {
        for (int j = n; j <= m; j++)
        {
            cout << j << " ";
        }
    }
    return 0;
}