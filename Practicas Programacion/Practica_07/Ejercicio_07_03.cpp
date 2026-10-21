// Materia: Programación I, Paralelo 4

// Autor: Hnadel Marcelo Cayo Portillo

// Carrera del estudiante: Ing Mecatronica

// Fecha creación: 24/09/2026
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
void llenar(int a)
{
    float suu = 0;
    float met = 0;
    float pro = 0;
    float vari = 0;
    vector<float> cali;
    for (int i = 0; i < a; i++)
    {
        cin >> met;
        cali.push_back(met);
        suu += cali[i];
        pro = suu / a;
    }
    cout << "la suma es de : " << suu << "\nel promedio es de : " << pro << endl;
    for (int i = 0; i < a; i++)
    {
        cout << cali[i] << " " << cali[i] - pro << endl;
        int sudes = 0;

        sudes += cali[i] - pro;
        vari = ((cali[i] - pro) * (cali[i] - pro)) / sudes;
    }
    cout << "La variacion fue de : " << vari;
}
int main()
{
    llenar(4);
}