#include <iostream>
using namespace std;
int main()
{

    float num1, num2, num3, num4, resultado = 0;
    cout << "ingrese prmero numero  : ";
    cin >> num1;
    cout << "ingree segundo numero : ";
    cin >> num2;
    cout << "ingrese tercer numero  : ";
    cin >> num3;
    cout << "ingree cuarto numero : ";
    cin >> num4;
    resultado = (num1 + num2) / (num3 + num4);
    cout.precision(2);
    cout << resultado;

    return 0;
}