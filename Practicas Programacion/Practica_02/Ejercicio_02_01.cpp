// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera: Ing.Mecatronica
// Fecha de Creación: 17/08/2026
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> valores;

    do
    {
        cout << "ingrese valores : ";
        cin >> n;
        valores.push_back(n);

    } while (n != 0);

    for (int i = 0; i < valores.size(); i++)
    {
        if (valores[i] > 0)
        {
            cout << valores[i] << " ";
        }
    }

    return 0;
}