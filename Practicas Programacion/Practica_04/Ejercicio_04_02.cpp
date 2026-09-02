// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo  Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 28/08/2026
#include <iostream>
using namespace std;
int mayor(int a, int b, int c)
{

    int mayor = 0;
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else if (c > a && c > b)
    {
        return c;
    }
}
int main()
{
    int a, b, c;
    cout << "ingresa los numeros para saber cual es el mayor : ";
    cin >> a >> b >> c;
    cout << "el mayor es : " << mayor(a, b, c);
    return 0;
}