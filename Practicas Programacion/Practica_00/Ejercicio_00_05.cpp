// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera: Ing mecatronica
// Fecha de Creación: 26/08/2026
#include <iostream>
using namespace std;
int main()
{

    float num1, num2, num3, num4, resultado = 0;
    cout << "ingrese primera nota  : ";
    cin >> num1;
    cout << "ingree segunda nota : ";
    cin >> num2;
    cout << "ingrese tercera nota  : ";
    cin >> num3;
    cout << "ingree cuarta nota : ";
    cin >> num4;
    resultado = (num1 + num2 + num3 + num4) / 4;
    cout.precision(2);
    cout << "la nora promedio es : " << resultado;
    return 0;
}