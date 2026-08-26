// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera: Ing mecatronica
// Fecha de Creación: 26/08/2026
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    float cateto1, cateto2;
    cout << "ingrese primer cateto : ";
    cin >> cateto1;
    cout << "ingree segundo cateto : ";
    cin >> cateto2;
    cout.precision(2);
    cout << "la hipotenusa del triangulo es : " << sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
    return 0;
}