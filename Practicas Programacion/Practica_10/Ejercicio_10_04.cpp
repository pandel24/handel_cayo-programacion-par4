// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 14/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
using namespace std;

void llenar(vector<double> &precios, int n)
{
    double p;

    for (int i = 0; i < n; i++)
    {
        cout << "Precio: ";
        cin >> p;
        precios.push_back(p);
    }
}

void ordenar(vector<double> &precios)
{
    int pos;
    double aux;

    for (int i = 0; i < precios.size() - 1; i++)
    {
        pos = i;

        for (int j = i + 1; j < precios.size(); j++)
        {
            if (precios[j] < precios[pos])
                pos = j;
        }

        aux = precios[i];
        precios[i] = precios[pos];
        precios[pos] = aux;
    }
}

void mostrar(vector<double> precios)
{
    cout << "Precios ordenados: ";

    for (int i = 0; i < precios.size(); i++)
        cout << precios[i] << " ";

    cout << endl;
}

void barato(vector<double> precios)
{
    cout << "Mas barato: " << precios[0] << endl;
}

void caro(vector<double> precios)
{
    cout << "Mas caro: " << precios[precios.size() - 1] << endl;
}

void mediana(vector<double> precios)
{
    int n = precios.size();

    if (n % 2 == 1)
        cout << "Mediana: " << precios[n / 2] << endl;
    else
        cout << "Mediana: "
             << (precios[n / 2 - 1] + precios[n / 2]) / 2
             << endl;
}

int main()
{
    vector<double> precios;
    int n;

    cout << "Cantidad de productos: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Cantidad invalida" << endl;
        return 0;
    }

    llenar(precios, n);
    ordenar(precios);
    mostrar(precios);
    barato(precios);
    caro(precios);
    mediana(precios);
}
