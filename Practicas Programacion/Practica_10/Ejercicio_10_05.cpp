// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 14/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <string>
using namespace std;

void ordenar(string &palabra)
{
    char aux;

    for (int i = 0; i < palabra.size() - 1; i++)
    {
        for (int j = 0; j < palabra.size() - 1 - i; j++)
        {
            if (palabra[j] > palabra[j + 1])
            {
                aux = palabra[j];
                palabra[j] = palabra[j + 1];
                palabra[j + 1] = aux;
            }
        }
    }
}

int main()
{
    string palabra;

    cout << "Ingresa una palabra: ";
    cin >> palabra;

    ordenar(palabra);

    cout << "Palabra ordenada: " << palabra << endl;
}
