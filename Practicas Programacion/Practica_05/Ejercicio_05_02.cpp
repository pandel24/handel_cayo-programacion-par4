// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 27/08/2026
#include <iostream>
using namespace std;
void modificar(int a, int &b)
{
    a = a * 2;
    b = b + 10;
}

int main()
{
    int x = 10;
    int y = 20;
    modificar(x, y);
    cout << "despues del cambio : " << x << " " << y;

    return 0;
}