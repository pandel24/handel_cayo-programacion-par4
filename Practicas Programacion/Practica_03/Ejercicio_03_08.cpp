// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 21/08/2026
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int n;
    int na = 0;
    int pre = 0;
    int uti = 0;
    int iv = 0;
    int s = 0;
    int ivt = 0;
    double des = 0;
    double dest = 0;
    double mc = 0;
    double mb = 10000;
    double preciof = 0;
    int nproal = 0;
    int nproba = 0;
    cout << "ingrese el numero de pruebas : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        {
            na = rand() % (10000 - 10 + 1) + 10;
            uti = na * 0.87;
            iv = na * 0.13;
            pre = uti + iv;
            if (pre > 2500)
            {
                des = pre * 0.05;
                preciof = pre - des;
                dest += des;
            }
            else
            {
                preciof = pre;
            }
            s += na;
            ivt = ivt + iv;
            if (preciof > mc)
            {
                mc = na;
                nproal = i;
            }
            if (mb > preciof)
            {
                mb = na;
                nproba = i;
            }
        }
        cout << "\nvalor de la compra : " << na << "\n---------------------------------------------";
    }
    cout << "\nla suma total de todo es de : " << s << "\ntotal acumulado por el iva es de : " << ivt << "\nla suma del decuento final es de : " << dest << "\nel producto mas caro fue : " << mc << "\nel prodcuto mas barato fue : " << mb;

    return 0;
}