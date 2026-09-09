// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 27/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n;
    cout << "ingrese numero de niños: ";
    cin >> n;

    srand(time(0));

    int ninos1 = rand() % (n + 1);
    int restante1 = n - ninos1;

    int ninos2 = rand() % (restante1 + 1);
    int restante2 = restante1 - ninos2;

    int ninos3 = rand() % (restante2 + 1);

    int panales = (ninos1 * 6) + (ninos2 * 3) + (ninos3 * 2);

    cout << "niños de 1 año: " << ninos1 << endl;
    cout << "niños de 2 años: " << ninos2 << endl;
    cout << "niños de 3 años: " << ninos3 << endl;
    cout << "total de pañales: " << panales << endl;

    return 0;
}