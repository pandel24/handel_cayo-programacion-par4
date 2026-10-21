// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 14/10/2026
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void generar(vector<string> nombres, vector<string> apellidos, int n)
{
    for (int i = 0; i < n; i++)
    {
        int a = rand() % 10;
        int b = rand() % 10;

        cout << nombres[a] << " " << apellidos[b] << endl;
    }
}

int main()
{
    vector<string> nombres = {
        "Juan", "Pedro", "Maria", "Ana", "Luis",
        "Carlos", "Sofia", "Diego", "Lucia", "Pablo"};

    vector<string> apellidos = {
        "Perez", "Lopez", "Cayo", "Mamani", "Flores",
        "Rojas", "Quispe", "Vargas", "Diaz", "Cruz"};

    int n;
    srand(time(NULL));

    cout << "Cantidad de nombres: ";
    cin >> n;

    generar(nombres, apellidos, n);
}
