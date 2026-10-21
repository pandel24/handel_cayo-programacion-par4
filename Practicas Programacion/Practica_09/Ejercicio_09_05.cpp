// Materia: Programación I, Paralelo 4
// Autor: Handel Marcelo Cayo Portillo
// Fecha creación: 07/10/2026
// Número de ejercicio: 1
#include <iostream>
using namespace std;

void mostrar(int sala[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sala[i][j] == 0)
                cout << "L ";
            else
                cout << "O ";
        }
        cout << endl;
    }
}

void comprar(int sala[5][5])
{
    int fil, as;

    cout << "Fila (1-5): ";
    cin >> fil;
    cout << "Asiento (1-5): ";
    cin >> as;

    if (fil < 1 || fil > 5 || as < 1 || as > 5)
    {
        cout << "Posicion invalida" << endl;
    }
    else if (sala[fil - 1][as - 1] == 0)
    {
        sala[fil - 1][as - 1] = 1;
        cout << "Reserva exitosa" << endl;
    }
    else
    {
        cout << "Asiento no disponible" << endl;
    }
}

void estadisticas(int sala[5][5])
{
    int lib = 0, ocu = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sala[i][j] == 0)
                lib++;
            else
                ocu++;
        }
    }

    cout << "Libres: " << lib * 4 << "%" << endl;
    cout << "Ocupados: " << ocu * 4 << "%" << endl;
}

int main()
{
    int sala[5][5] = {0};
    int op = 0;

    while (op != 4)
    {
        cout << "\n1. Mostrar sala" << endl;
        cout << "2. Comprar entrada" << endl;
        cout << "3. Estadisticas" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> op;

        if (op == 1)
            mostrar(sala);
        else if (op == 2)
            comprar(sala);
        else if (op == 3)
            estadisticas(sala);
        else if (op != 4)
            cout << "Opcion invalida" << endl;
    }
}
