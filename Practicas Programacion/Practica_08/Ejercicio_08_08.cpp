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

bool plagio(string A, string B)
{
    int cont = 0;
    string palabra = "";

    for (int i = 0; i <= A.size(); i++)
    {
        if (A[i] == ' ' || i == A.size())
        {
            if (B.find(palabra) != -1)
            {
                cout << palabra << endl;
                cont++;
            }

            palabra = "";
        }
        else
        {
            palabra += A[i];
        }
    }

    return cont > 3;
}

int main()
{
    string A = "El sistema fue desarrollado en C++";
    string B = "El nuevo sistema fue codificado en C++";

    bool resultado = plagio(A, B);

    if (resultado == true)
        cout << "Alerta de plagio: Verdadero";
    else
        cout << "Alerta de plagio: Falso";

    return 0;
}