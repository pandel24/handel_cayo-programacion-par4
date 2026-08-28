// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 21/08/2026
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
    int n;
    int adivi;
    int c = 0;
    srand(time(0));
    adivi = rand() % (100 - 1 + 1) + 1;
    while (adivi != n)
    {
        cout << "\ningrese el numero a adivinar entre 1 y 100 : ";
        cin >> n;
        if (adivi > n)
        {
            cout << "el numero es mayor";
        }
        else if (adivi < n)
        {
            cout << "el numero es menor";
        }
        c++;
    }
    cout << "EL NUMERO ES IGUAAAAL";
    cout << "\nte tomo : " << c;
    return 0;
}