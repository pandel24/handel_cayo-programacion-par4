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

void llenar(vector<string> &lista, vector<string> nombres,
            vector<string> apellidos, int n)
{
    for (int i = 0; i < n; i++)
    {
        int a = rand() % 10;
        int b = rand() % 10;

        lista.push_back(nombres[a] + " " + apellidos[b]);
    }
}

void ordenar(vector<string> &lista)
{
    string aux;

    for (int i = 0; i < lista.size() - 1; i++)
    {
        for (int j = 0; j < lista.size() - 1 - i; j++)
        {
            if (lista[j] > lista[j + 1])
            {
                aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
}

void mostrar(vector<string> lista)
{
    for (int i = 0; i < lista.size(); i++)
        cout << lista[i] << endl;
}

int main()
{
    vector<string> nombres = {
        "Juan", "Pedro", "Maria", "Ana", "Luis",
        "Carlos", "Sofia", "Diego", "Lucia", "Pablo"};

    vector<string> apellidos = {
        "Perez", "Lopez", "Cayo", "Mamani", "Flores",
        "Rojas", "Quispe", "Vargas", "Diaz", "Cruz"};

    vector<string> lista;
    int n;

    srand(time(NULL));

    cout << "Cantidad de estudiantes: ";
    cin >> n;

    llenar(lista, nombres, apellidos, n);

    cout << "Lista original:" << endl;
    mostrar(lista);

    ordenar(lista);

    cout << "Lista alfabetica:" << endl;
    mostrar(lista);
}
