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
string veri(string mensa)
{
    vector<string> pro = {"tonto", "estupido", "webon", "imbecil", "cojudo"};

    for (int i = 0; i < pro.size(); i++)
    {
        size_t pos = mensa.find(pro[i]);

        while (pos != string::npos)
        {
            mensa.replace(pos, pro[i].size(), "*****");
            pos = mensa.find(pro[i], pos + 5);
        }
    }

    return mensa;
}

int main()
{
    cout << veri("oe cojudo") << endl;
}