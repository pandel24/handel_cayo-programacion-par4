// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo  Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 28/08/2026
#include <iostream>
using namespace std;
int area(int a, int b)
{

    int ar = 0;
    ar = (a * b) / 2;
    return ar;
}
int main()
{
    int a, b;
    cout << "ingresa los numeros para area : ";
    cin >> a >> b;
    cout << "el area es de : " << area(a, b);
    return 0;
}