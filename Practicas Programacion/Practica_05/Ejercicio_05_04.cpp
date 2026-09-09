// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 27/08/2026
#include <iostream>
using namespace std;
double area(double cua)
{
    cua = cua * cua;
    return cua;
}
double area(double rec, double rec2)
{
    rec = rec * rec2;
    return rec;
}
float area(float cir, float pi)
{
    cir = cir * cir * pi;
    return cir;
}

int main()
{
    cout << "area del cuadrado : " << area(4);
    cout << "area del rectangulo : " << area(4.0, 2.0);
    cout << "area del circulo : " << area(4.0f, 3.14f);
    return 0;
}