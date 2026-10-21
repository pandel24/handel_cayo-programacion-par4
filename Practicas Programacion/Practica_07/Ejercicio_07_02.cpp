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
int main()
{
    vector<float> voltios = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << voltios[i * 3 + j] << " ";
        }
        cout << endl;
    }
}