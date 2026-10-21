// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 30/09/2026
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
void ur(string pru)
{
    int p = pru.find("://");

    string p1 = pru.substr(0, p);
    string p2 = pru.substr(p + 3, pru.find("/", p + 3) - (p + 3));
    string p3 = pru.substr(pru.find("/", p + 3));
    cout << p1 << endl
         << p2 << endl
         << p3;
}
int main()
{

    ur("https://www.universidad.edu.bo/carreras/sistemas");
}