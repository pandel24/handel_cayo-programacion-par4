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
vector<string> corre(vector<string> corre2)
{
    vector<string> corre3;
    bool pri = false;
    bool ulti = false;
    bool arro = false;
    int uno = 0;
    int dos = 0;
    int pun = 0;
    string compro;
    for (int i = 0; i < corre2.size(); i++)
    {
        uno = corre2[i].find("@");
        pun = corre2[1].find('.', uno + 1);
        dos = corre2[i].find("@", uno + 1);

        if (uno != -1 && dos == -1)
        {
            compro = corre2[i].substr(uno);
            arro = true;
        }
        if (corre2[i][uno + 1] != '.')
        {
            pri = true;
        }
        if (corre2[i].back() != '.')
        {
            ulti = true;
        }
        if (arro && pri && ulti && compro == "@ucb.edu.bo")
        {
            corre3.push_back(corre2[i]);
        }

        pri = false;
        ulti = false;
        arro = false;
    }
    return corre3;
}

int main()
{

    vector<string> correos = {
        "handel@ucb.edu.bo",
        "juan@gmail.com",
        "maria@ucb.edu.bo",
        "pedro@@ucb.edu.bo",
        "ana@ucb.edu.bo.",
        "luis@ucb.edu.bo",
        "carlos@ucb..edu.bo",
        "sofia@ucb.edu",
        "diego.ucb.edu.bo",
        "andres@.ucb.edu.bo"};
    vector<string> resul = corre(correos);
    for (int i; i < resul.size(); i++)
    {
        cout << resul[i] << endl;
    }
    return 0;
}