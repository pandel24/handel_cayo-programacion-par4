// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 27/08/2026
#include <iostream>
using namespace std;
void cambiar(int &a, int &b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int x = 10;
    int y = 20;
    cout << "antes del cambio : " << x << " " << y;
    cambiar(x, y);
    cout << "despues del cambio : " << x << " " << y;

    return 0;
}