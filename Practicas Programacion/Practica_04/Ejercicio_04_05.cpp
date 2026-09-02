// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo  Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 28/08/2026
#include <iostream>
using namespace std;
bool par(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a;
    cout << "ingresa para saber si es par o no : ";
    cin >> a;
    if (par(a))
    {
        cout << "es par w";
    }
    else
    {
        cout << "no es par";
    }
    return 0;
}