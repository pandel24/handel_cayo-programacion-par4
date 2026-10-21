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
bool veri(string contra)
{
    for (int i = 0; i < contra.size(); i++)
    {
        if (isupper(contra[i]))
        {
            return true;
        }
        if (isdigit(contra[i]))
        {
            return true;
        }
        if (i >= 8)
        {
            return true;
        }
        else
            return false;
    }
}
int main()
{
    string contras;
    cin >> contras;
    if (veri(contras))
    {
        cout << " la contrasenña es segura";
    }
    else
    {
        cout << " no es segura vro ";
    }
}