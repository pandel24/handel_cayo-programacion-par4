// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 21/08/2026
#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact = 1;
    int s = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        s = s + fact;
    }
    cout << "la suma es de : " << s;
    return 0;
}