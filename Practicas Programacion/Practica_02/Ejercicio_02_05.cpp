// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera: Ing.Mecatronica
// Fecha de Creación: 17/08/2026
using namespace std;
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int s = 0;
    int fac = 1;

    cout << "Ingrese la cantidad de suma: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
        s += fac;
    }

    cout << s;

    return 0;
}