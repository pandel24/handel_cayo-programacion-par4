// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo  Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 28/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int nota()
{
    return rand() % 101;
}

bool examen(int p1, int p2, int p3)
{
    if(p1 >= 60 && p2 >= 60 && p3 >= 60)
        return true;
    else
        return false;
}

double final(int p1, int p2, int p3, int ex)
{
    double prom;
    prom = (p1 + p2 + p3) / 3.0;

    return (prom * 0.5) + (ex * 0.5);
}

int main()
{
    srand(time(0));

    int n;
    int aprobados = 0;
    int reprobados = 0;
    double suma = 0;

    cout << "ingrese la cantidad de estudiantes: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int p1 = nota();
        int p2 = nota();
        int p3 = nota();

        cout << "\nestudiante " << i << endl;
        cout << "parcial 1: " << p1 << endl;
        cout << "parcial 2: " << p2 << endl;
        cout << "parcial 3: " << p3 << endl;

        if(examen(p1, p2, p3))
        {
            int ex = nota();
            double nf = final(p1, p2, p3, ex);

            cout << "examen: " << ex << endl;
            cout << "nota final: " << nf << endl;

            if(nf >= 51)
            {
                cout << "aprobado" << endl;
                aprobados++;
            }
            else
            {
                cout << "reprobado" << endl;
                reprobados++;
            }

            suma = suma + nf;
        }
        else
        {
            cout << "no puede dar el examen" << endl;
            cout << "reprobado" << endl;
            reprobados++;
        }
    }

    cout << "\naprobados: " << aprobados << endl;
    cout << "reprobados: " << reprobados << endl;

    cout << "porcentaje aprobados: "
         << aprobados * 100.0 / n << "%" << endl;

    cout << "porcentaje reprobados: "
         << reprobados * 100.0 / n << "%" << endl;

    cout << "promedio de notas finales: "
         << suma / n << endl;

    return 0;
}