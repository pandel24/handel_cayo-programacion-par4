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
    int s = 0;
    cout << "ingrese el numero para saber si es perfecto o no : ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    if (s == n)
    {
        cout << "si es numero perfecto";
    }
    else
    {
        cout << "no es perfecto w";
    }
    return 0;
}