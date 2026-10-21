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
void has(string prue)
{

    int p = prue.find("#");
    while (p < prue.size())
    {
        cout << prue.substr(p, prue.find(" ", p) - p);
        p = prue.find("#", prue.find(" ", p));
    }
}
int main()
{
    has("Estudiando #ProgramacionI en la #UCB para ser #Ingeniero");
}