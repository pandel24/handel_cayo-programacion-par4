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
    int pro = 0;
    int alt = 0;
    int men = 1000;
    for (int i = 0; i < 6; i++)
    {
        cout << "ingrese la temperatura : ";
        cin >> n;
        pro += n;
        if (n >= alt)
        {
            alt = n;
        }
        if (n < men)
        {
            men = n;
        }
    }
    cout << "la temperatura media sera : " << pro / 6 << "\nla mas alta fue de : " << alt << " \nla mas baja es de : " << men;

    return 0;
}