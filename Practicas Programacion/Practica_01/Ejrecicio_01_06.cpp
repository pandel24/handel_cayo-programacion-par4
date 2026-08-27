// Materia: Programación I, Paralelo 4
// Autor: Hnadel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main()
{
    cout << "ingrese el nmero : ";
    int numero;
    cin >> numero;
    if (numero % 2 == 0)
        cout << "Par";
    else
        cout << "Impar";

    return 0;
}