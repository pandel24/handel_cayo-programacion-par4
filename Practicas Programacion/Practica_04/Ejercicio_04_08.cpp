// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo  Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 28/08/2026
#include <iostream>
using namespace std;
int dig(int a)
{
    int co = 1;
    while (a / 10 != 0)
    {
        co++;
        a = a / 10;
    }
    return co;
}
int main()
{
    int a;
    cout << "ingresa el nuermo del cual desea saber su cantidad de digitos : ";
    cin >> a;
    cout << "los digitos son de  : " << dig(a);
    return 0;
}