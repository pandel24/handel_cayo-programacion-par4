// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo  Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 28/08/2026
#include <iostream>
using namespace std;
int dista(int a, int b)
{
    int dist = 0;
    dist = a * b;
    return dist;
}
int main()
{
    int a, b;
    cout << "ingresa velocidad y tiempo : ";
    cin >> a >> b;
    cout << "la distancia sera de : " << dista(a, b);
    return 0;
}