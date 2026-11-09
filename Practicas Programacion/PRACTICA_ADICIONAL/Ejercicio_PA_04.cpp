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
string elec(vector<string> parti, vector<int> num, int n)
{
    int voto = 0;
    int mayor = 0;
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        voto = rand() % 4;
        num[voto]++;
    }
    for (int i = 1; i < parti.size(); i++)
    {
        if (num[i] > mayor)
        {
            mayor = num[i];
            pos = i;
        }
    }
    return parti[pos];
}

int main()
{
    srand(time(0));
    vector<string> partidos = {"PDC", "LIBRE", "MAS", "UN"};
    vector<int> votos = {0, 0, 0, 0};
    cout << elec(partidos, votos, 5);
    return 0;
}