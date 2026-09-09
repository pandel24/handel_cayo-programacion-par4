// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 27/08/2026
#include <iostream>
using namespace std;
double calcu(double ba, double iva = 0.13)
{
    return ba = ba * 0.13;
}

int main()
{
    int n = 0;
    int i = 0;
    double pre1 = 0;
    double pre2 = 0;
    cout << "ingrese el numero y impuesto : ";
    cin >> n >> i;
    pre1 = calcu(n);
    pre2 = calcu(n, i);
    cout << "con iva del 13% es de : " << pre1 << "y con su impuesto es de : " << pre2;
    return 0;
}