// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera: Inh Mecatronica
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

void calc_anos(int totalDias, int &anio, int &mes, int &dia)
{
    anio = 2000 + totalDias / 365;
    totalDias = totalDias % 365;

    mes = totalDias / 30 + 1;
    totalDias = totalDias % 30;

    dia = totalDias + 1;
}

int main()
{
    int totalDias;
    int anio, mes, dia;

    cout << "ingrese el numero de dias desde el 1/1/2000: ";
    cin >> totalDias;

    calc_anos(totalDias, anio, mes, dia);

    cout << "año: " << anio << endl;
    cout << "mes: " << mes << endl;
    cout << "dia: " << dia << endl;

    return 0;
}