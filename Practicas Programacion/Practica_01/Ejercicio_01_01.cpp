// Materia: Programación I, Paralelo 4
// Autor: Hnadel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;

int main()
{
    int gestion;
    cout << "ingrese la gestion  : ";
    cin >> gestion;
    if (gestion % 4 == 0)
    {
        cout << "si es bisiesto";
    }
    else
    {
        cout << "no es bisiesto";
    }
    return 0;
}