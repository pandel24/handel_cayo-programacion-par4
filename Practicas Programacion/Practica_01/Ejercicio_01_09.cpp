// Materia: Programación I, Paralelo 4
// Autor: Hnadel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "ingrese el valor de la matriz : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= n - 1; j++)
        {
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}