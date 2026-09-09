// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 27/08/2026
#include <iostream>
using namespace std;
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal = sumaTotal + nuevaNota;
    cantidadNotas++;
}

int main()
{
    int n;
    int no;
    double a = 0;
    int b = 0;
    cout << "ingrese numero : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "ingrese nota ";
        cin >> no;
        agregarNota(a, b, no);
    }
    cout << "la cantidad de nuevas fue de : " << b;
    cout << "la suma fue de  : " << a;
    cout << "el promedio fue de :  : " << a / b;
    return 0;
}