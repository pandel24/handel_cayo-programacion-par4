// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo  Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 28/08/2026
#include <iostream>
using namespace std;
int suma(int a)
{
    int su = 0;
    for (int i = 0; i <= a; i++)
    {
        su += i;
    }
    return su;
}
int main()
{
    int a;
    cout << "ingresa numero : ";
    cin >> a;
    cout << "el valor de la suma es de : " << suma(a);
    return 0;
}