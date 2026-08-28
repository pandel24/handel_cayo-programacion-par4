// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera: Ing.Mecatronica
// Fecha de Creación: 17/08/2026
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;
    int s = 0;
    cout << "ingrese la cantidad de suma : ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        s += i;
    }
    cout << s - (2 * n + 1);

    return 0;
}