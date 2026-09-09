// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 27/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "ingrese n: ";
    cin >> n;

    srand(time(0));

    int sumaPares = 0;
    int sumaImpares = 0;
    int cantImpares = 0;
    int mayorPrimo = -1;

    for (int i = 0; i < n; i++)
    {
        int num = 1 + rand() % (1000 - 1 + 1);
        cout << num << " ";

        if (num % 2 == 0)
        {
            sumaPares = sumaPares + num;
        }
        else
        {
            sumaImpares = sumaImpares + num;
            cantImpares++;
        }

        bool esPrimo = true;
        if (num <= 1)
        {
            esPrimo = false;
        }
        for (int j = 2; j <= sqrt(num) && esPrimo; j++)
        {
            if (num % j == 0)
            {
                esPrimo = false;
            }
        }

        if (esPrimo && num > mayorPrimo)
        {
            mayorPrimo = num;
        }
    }

    double promedioImpares = cantImpares > 0 ? (double)sumaImpares / cantImpares : 0;

    cout << "\nsuma de pares: " << sumaPares;
    cout << "\npromedio de impares: " << promedioImpares;
    if (mayorPrimo == -1)
        cout << "\nno se genero ningun primo";
    else
        cout << "\nmayor primo generado: " << mayorPrimo;

    return 0;
}