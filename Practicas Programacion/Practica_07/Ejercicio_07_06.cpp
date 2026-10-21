// Materia: Programación I, Paralelo 4

// Autor: Hnadel Marcelo Cayo Portillo

// Carrera del estudiante: Ing Mecatronica

// Fecha creación: 24/09/2026
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
void multi()
{
    vector<int> a = {5, 6, 7, 8, 12};
    vector<int> b = {1, 2, 3, 4, 15};
    vector<int> c;
    for (int i = 0; i < a.size(); i++)
    {
        c.push_back(a[i] + b[i]);
    }
    for (int x : c)
    {
        cout << x << " ";
    }
}
int main()
{

    multi();
}