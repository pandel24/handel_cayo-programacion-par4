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
    vector<int> a = {5, 6, 7, 8};
    vector<int> b = {1, 2, 3, 4};
    vector<int> c;
    for (int i = 0; i < a.size(); i++)
    {
        int multi = a[i] * b[i];
        c.push_back(multi);
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