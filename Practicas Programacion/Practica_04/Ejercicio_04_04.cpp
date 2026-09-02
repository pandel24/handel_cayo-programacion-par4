// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo  Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 28/08/2026
#include <iostream>
using namespace std;
int dolar(int a, int b)
{
    int dol = 0;
    dol = a * b;
    return dol;
}
int main()
{
    int a, b;
    cout << "ingresa para cambiar de bolivanos a dolares y el tipo de cambio : ";
    cin >> a >> b;
    cout << "en dolares es : " << dolar(a, b);
    return 0;
}