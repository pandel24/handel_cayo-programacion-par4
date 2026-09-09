// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 27/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n;
    int mone;
    double cara = 0;
    double cruz = 0;
    srand(time(0));
    cout << "ingrese numero de pruebas : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        mone = 1 + rand() % (2 - 1 + 1);
        if (mone == 1)
        {
            cara++;
        }
        else
        {
            cruz++;
        }
    }
    cara = cara / n * 100;
    cruz = cruz / n * 100;
    cout << "porcentaje de cara fue de : " << cara << "\ny de cruz fue de : " << cruz;

    return 0;
}