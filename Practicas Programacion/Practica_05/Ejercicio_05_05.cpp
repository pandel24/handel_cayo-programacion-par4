// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera del estudiante: Ing Mecatronica
// Fecha creación: 27/08/2026
#include <iostream>
using namespace std;
void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos / 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}

int main()
{
    int seg, h, m, s;
    cout << "ingrese los segundos : ";
    cin >> seg;
    calcularTiempo(seg, h, m, s);
    cout << "horas : " << h << "\nminutos :  " << m << "\nsegundos : " << s;
    return 0;
}