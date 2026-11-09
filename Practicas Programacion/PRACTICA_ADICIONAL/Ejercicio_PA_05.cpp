// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 27/10/2026
// Número de ejercicio: 1
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <ctime>
using namespace std;
vector<string> cifra(string pala)
{
    vector<string> ul;
    for (int i = pala.size() - 1; i >= 0; i--)
    {
        ul.push_back(pala.substr(i, 1));
    }
    return ul;
}

int main()
{
    vector<string> ulti = cifra("Hola");
    for (int i = 0; i < ulti.size(); i++)
    {
        cout << ulti[i];
    }
}