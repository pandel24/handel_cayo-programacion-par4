// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 21/08/2026
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
    int n;
    int s = 0;
    cout << "ingrese la cantidad de numeros q quiera sumar : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s += i;
    }
    cout << "suma de numeros totales : " << s;
    return 0;
}