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
bool tar(string tarjet)
{
    int ver = 0;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 14; i >= 0; i = i - 2)
    {
        ver = (tarjet[i] - '0') * 2;
        if (ver > 9)
        {
            ver = ver - 9;
        }
        sum1 += ver;
    }
    for (int i = 15; i >= 1; i = i - 2)
    {
        sum2 += tarjet[i] - '0';
    }
    if ((sum1 + sum2) % 10 == 0)
    {
        return true;
    }
    else
        return false;
}
int main()
{

    if (tar("4532015112830366"))
    {
        cout << " es una tarjeta ";
    }
    else
        cout << " es falso vro";
}