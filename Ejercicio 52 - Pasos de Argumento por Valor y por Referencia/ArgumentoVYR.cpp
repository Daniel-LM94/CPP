#include <iostream>
using namespace std;

// Funcion Sumar con Valor por Referencia () & = Referencia
void SumarconVporR (int a, int b, int &Resultado)
{ 
    Resultado = a + b;
}

int main(int argc, char const *argv[])
{
    int Num1 = 5;
    int Num2 = 7;
    int R = 5; // "R" se vera vinculado a "Resultado" por la referncia 
   
    SumarconVporR (Num1, Num2, R);
    cout << endl;
    cout << "La suma de a y b es : " << R ;
    cout << endl;
    
    return 0;
}