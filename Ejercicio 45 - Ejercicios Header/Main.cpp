#include<iostream>
#include"Calculadora.h"  // Usando la Extencion .h (header)
#include"Alumnos.h"
using namespace std;

extern int Sumar (int a, int b);  // Usando el Comando Extern


int main(int argc, char const *argv[])
{
    cout << Calculadora (5, 7, '+') <<endl;
    cout << endl;
    cout << ObtenerNombreCompleto () << endl;
    cout << ObtenerEdad () << endl;

    return 0;
}
