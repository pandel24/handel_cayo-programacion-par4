// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera: Ing.Mecatronica
// Fecha de Creación: 17/08/2026
using namespace std;
#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Ingrese el numero : ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    return 0;
}