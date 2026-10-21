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
void pala(string prue)
{

    string res = "";
    for (int i = 0; i < prue.size(); i++)
    {
        if (prue[i] != ' ')
        {
            res += (prue[i]);
        }

        else if (res != "" && res[res.size() - 1] != ' ')
        {
            res += ' ';
        }
    }
    for (char x : res)
    {
        cout << x << " ";
    }
}
int main()
{
    pala(" Juan Perez Gonzalez ");
}