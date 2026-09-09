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
    int fac;
    int fact = 1;
    srand(time(0));
    fac = 1 + rand() % (10 - 1 + 1);
    for (int i = fac; i >= 1; i--)
    {
        fact = fact * i;
    }
    cout << "el numero fue : " << fac << "\ny su factorial es : " << fact;

    return 0;
}