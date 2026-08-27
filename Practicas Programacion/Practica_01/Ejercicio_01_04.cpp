
// Materia: Programación I, Paralelo 4
// Autor: Hnadel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main()
{
    float np, nt, nparti;
    cout << "ingrese las notes de practica de teorica y de participacion : ";
    cin >> np >> nt >> nparti;
    cout << "la nota final es : " << (np * 0.3) + (nt * 0.6) + (nparti * 0.1);
    return 0;
}