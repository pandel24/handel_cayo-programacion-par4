// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Carrera: Inh Mecatronica
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;

void cambio(int monto, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno)
{
    cien = monto / 100;
    monto = monto % 100;

    cincuenta = monto / 50;
    monto = monto % 50;

    veinte = monto / 20;
    monto = monto % 20;

    diez = monto / 10;
    monto = monto % 10;

    cinco = monto / 5;
    monto = monto % 5;

    uno = monto;
}

int main()
{
    int monto;
    int cien, cincuenta, veinte, diez, cinco, uno;

    cout << "ingrese el monto en dolares: ";
    cin >> monto;

    cambio(monto, cien, cincuenta, veinte, diez, cinco, uno);

    cout << "billetes de 100: " << cien << endl;
    cout << "billetes de 50: " << cincuenta << endl;
    cout << "billetes de 20: " << veinte << endl;
    cout << "billetes de 10: " << diez << endl;
    cout << "billetes de 5: " << cinco << endl;
    cout << "billetes de 1: " << uno << endl;

    return 0;
}