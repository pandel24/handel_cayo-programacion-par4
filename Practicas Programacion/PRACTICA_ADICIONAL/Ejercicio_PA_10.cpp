// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 27/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void barato(vector<string> destinos, vector<vector<int>> precios)
{
    for (int i = 0; i < destinos.size(); i++)
    {
        int menor = precios[i][0];
        int pos = 0;

        for (int j = 1; j < 3; j++)
        {
            if (precios[i][j] < menor)
            {
                menor = precios[i][j];
                pos = j;
            }
        }

        cout << destinos[i] << ": ";

        if (pos == 0)
            cout << "BOA";
        else if (pos == 1)
            cout << "Avianca";
        else
            cout << "Copa";

        cout << " - $" << menor << endl;
    }
}

int main()
{
    srand(time(0));

    vector<string> destinos = {
        "Miami", "Madrid", "Bogota",
        "Chile", "Francia", "Espana"};

    vector<vector<int>> precios(6, vector<int>(3));

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            precios[i][j] = 300 + rand() % 901;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << destinos[i] << endl;
        cout << "BOA: $" << precios[i][0] << endl;
        cout << "Avianca: $" << precios[i][1] << endl;
        cout << "Copa: $" << precios[i][2] << endl;
        cout << endl;
    }

    // A) Cotizador
    string buscar;
    cout << "Ingrese las primeras 3 letras del destino: ";
    cin >> buscar;

    bool encontrado = false;

    for (int i = 0; i < 6; i++)
    {
        if (buscar[0] == destinos[i][0] &&
            buscar[1] == destinos[i][1] &&
            buscar[2] == destinos[i][2])
        {
            cout << "\nDestino: " << destinos[i] << endl;
            cout << "BOA: $" << precios[i][0] << endl;
            cout << "Avianca: $" << precios[i][1] << endl;
            cout << "Copa: $" << precios[i][2] << endl;

            encontrado = true;
        }
    }

    if (encontrado == false)
        cout << "Destino no encontrado" << endl;

    // B) Aerolinea mas barata
    cout << "\n--- AEROLINEA MAS BARATA ---" << endl;

    barato(destinos, precios);

    return 0;
}
