// Materia: Programación I, Paralelo 4
// Autor: Hnadel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main()
{
    int n;
    int ulti;
    int con = 0;
    int sum = 0;
    cout << "ingrese numero : ";
    cin >> n;
    while (n != 0)
    {
        ulti = n % 10;
        sum += ulti;
        con = con + 1;
        n = n / 10;
    }

    cout << "digitos totales : " << con << " suma total : " << sum;
    return 0;
}