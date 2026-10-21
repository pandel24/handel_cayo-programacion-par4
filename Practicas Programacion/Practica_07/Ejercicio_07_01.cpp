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
float ale(float max, float min)
{

    return (rand() % ((int)((max - min) * 100) + 1)) / 100.0 + min;
}
void volta()
{
    vector<float> vol;
    for (int i = 0; i < 100; i++)
    {

        vol.push_back(ale(220.00, 20.00));
    }
    for (float x : vol)
    {
        cout << x << " ";
    }
}
void temp()
{
    vector<float> vol;
    for (int i = 0; i < 50; i++)
    {

        vol.push_back(ale(100.00, 0.00));
    }
    for (float x : vol)
    {
        cout << x << " ";
    }
}
void pala()
{

    string cara = "JABCDSSKJFIDFDXAIHFAUIGRUFGUDSAGFGSAPU";
    for (int i = 0; i < 32; i++)
    {
        cout << cara[rand() % cara.size()];
    }
}
void gest()
{
    vector<float> vol;
    for (int i = 0; i < 32; i++)
    {

        vol.push_back(ale(100.00, 10.00));
    }
    for (float x : vol)
    {
        cout << x << " ";
    }
}
void velo()
{
    vector<float> vol;
    for (int i = 0; i < 1000; i++)
    {

        vol.push_back(ale(1000.00, 1.00));
    }
    for (float x : vol)
    {
        cout << x << " ";
    }
}
void dista()
{
    vector<float> vol;
    for (int i = 0; i < 100; i++)
    {

        vol.push_back(ale(100.00, 0.00));
    }
    for (float x : vol)
    {
        cout << x << " ";
    }
}

int main()
{
    srand(time(0));
    vector<float> voltaje;
    volta();
    cout << "----------------" << endl;
    temp();
    cout << "----------------" << endl;
    gest();
    cout << "----------------" << endl;
    velo();
    cout << "----------------" << endl;
    dista();
    cout << "----------------" << endl;
    pala();
}