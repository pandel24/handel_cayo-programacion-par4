// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 07/10/2026
// Número de ejercicio: 1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenar(int temperaturas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            temperaturas[i][j] = rand() % 31 + 5;
            cout << temperaturas[i][j] << "\t";
        }
        cout << endl;
    }
}

void calcular(int temperaturas[4][7])
{
    int mayor = temperaturas[0][0];
    int sem = 0, dia = 0;
    int cont = 0;
    float prom;

    for (int i = 0; i < 4; i++)
    {
        prom = 0;

        for (int j = 0; j < 7; j++)
        {
            prom += temperaturas[i][j];

            if (temperaturas[i][j] > mayor)
            {
                mayor = temperaturas[i][j];
                sem = i;
                dia = j;
            }

            if (temperaturas[i][j] > 30)
                cont++;
        }

        cout << "Promedio semana " << i + 1
             << ": " << prom / 7 << endl;
    }

    cout << "Temperatura maxima: " << mayor << " C" << endl;
    cout << "Semana: " << sem + 1
         << ", dia: " << dia + 1 << endl;

    cout << "Dias con temperatura mayor a 30 C: "
         << cont << endl;
}

int main()
{
    int temperaturas[4][7];

    srand(time(NULL));

    llenar(temperaturas);
    calcular(temperaturas);
}
