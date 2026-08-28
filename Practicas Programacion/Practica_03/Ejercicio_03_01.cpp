// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 21/08/2026
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 0; i <= 10; i++)
    {
        cout << n << "*" << i << " = " << n * i << endl;
    }

    return 0;
}