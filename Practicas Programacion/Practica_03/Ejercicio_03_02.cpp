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
    int nu;
    int st = 0;
    int sp = 0;
    int si = 0;
    int spri = 0;
    srand(time(0));
    cout << "ingrese la cantidad de numeros aleatorios : ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        nu = rand() % (100 - 1 + 1) + 1;
        st += nu;
        if (nu % 2 == 0)
        {
            sp += nu;
        }
        if (nu % 2 != 0)
        {
            si += nu;
        }
        for (int j = 1; j < n; j++)
        {
            if (nu % i != 0)
            {
                spri += nu;
            }
        }
    }
    cout << "suma de numeros totales : " << st << "\nsuma de numeros pares : " << sp << "\nsuma de impares : " << si << "\nsuma de primos : " << spri;
    return 0;
}