// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo  Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 28/08/2026
#include <iostream>
using namespace std;
int areacli(int a, int r)
{
    int v = 0;
    v = 3.14 * a * a * r;
    return v;
}
int main()
{
    int a, b, c;
    cout << "ingresa los numeros para el area de un cilindro por altura : ";
    cin >> a >> b;
    cout << "el mayor es : " << areacli(a, b);
    return 0;
}