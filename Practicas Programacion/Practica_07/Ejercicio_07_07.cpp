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
void relle()
{
    int val = 0;
    cin >> val;
    vector<int> a;
    while (val >= 0)
    {
        a.push_back(val);
        cin >> val;
        }
    for (int x : a)
    {
        cout << x << " ";
    }
}
int main()
{

    relle();
}