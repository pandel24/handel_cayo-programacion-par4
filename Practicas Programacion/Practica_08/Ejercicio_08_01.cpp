// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 30/09/2026
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int alea(int min, int max)
{
    return min + rand() % (max - min + 1);
}
string nombre()
{
    string fina;
    vector<string> nombres = {"Juan", "Maria", "Pedro", "Ana", "Luis", "Carlos", "Sofia", "Diego", "Laura", "Pablo"};
    vector<string> apellidos = {"Perez", "Lopez", "Gomez", "Flores", "Rojas", "Cayo", "Mamani", "Vargas", "Quispe", "Rivera"};
    return fina = nombres[alea(0, 9)] + " " + apellidos[alea(0, 9)] + " ";
}
int main()
{
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        cout << nombre() << alea(1, 50) << endl;
    }
}