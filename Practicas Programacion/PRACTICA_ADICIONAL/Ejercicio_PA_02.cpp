// PRÁCTICA ADICIONAL
// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 27/10/2026
// Número de ejercicio: 1
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <ctime>
using namespace std;
vector<string> jun(vector<string> nom, vector<string> ape)
{
    string nomb;
    char nnom;
    string apee;
    char nape;
    string usu;
    vector<string> usua;

    for (int i = 0; i < nom.size(); i++)
    {
        nomb = nom[i].substr(0, 1);
        nnom = tolower(nomb[0]);
        for (int k = 0; k < ape[i].size(); k++)
        {
            ape[i][k] = towlower(ape[i][k]);
            usu = nnom + ape[i];
        }

        usua.push_back(usu);
    }

    return usua;
}

int main()
{

    vector<string> nombres = {"Willy", "Juan", "Pedro", "Maria", "Ana"};
    vector<string> apellidos = {"Tenorio", "Perez", "Lopez", "Flores", "Rojas"};
    vector<string> usuari = jun(nombres, apellidos);
    for (int i = 0; i < usuari.size(); i++)
    {
        cout << usuari[i] << endl;
    }
    return 0;
}