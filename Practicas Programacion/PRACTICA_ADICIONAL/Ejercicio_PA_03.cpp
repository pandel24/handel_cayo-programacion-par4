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
vector<string> bus(vector<string> pal, string car)
{
    vector<string> vuel;
    string nupa;
    for (int i = 0; i < pal.size(); i++)
    {
        if (pal[i].size() >= car.size())
        {
            nupa = pal[i].substr(pal[i].size() - car.size(), car.size());
            if (nupa == car)
            {
                vuel.push_back(pal[i]);
            }
        }
    }
    return vuel;
}

int main()
{
    string busc;
    cin >> busc;

    vector<string> palabras = {
        "cancion", "educacion", "corazon",
        "programacion", "casa"};
    vector<string> resul = bus(palabras, busc);
    for (int i = 0; i < resul.size(); i++)
    {
        cout << resul[i] << endl;
    }
    return 0;
}