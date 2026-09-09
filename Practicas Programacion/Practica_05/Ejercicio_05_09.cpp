// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 27/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    int num;
    bool pri = true;
    srand(time(0));
    num = 1 + rand() % (10000 - 1 + 1);
    for (int i = 2; i < num; i++)
    {
        pri = true;
        for (int j = 2; j < sqrt(num) && pri; j++)
        {
            if (i % j == 0)
            {
                pri = false;
            }
        }
        if (pri)
        {
            cout << i << " ";
        }
    }
    cout << "el numero fue : " << num;

    return 0;
}