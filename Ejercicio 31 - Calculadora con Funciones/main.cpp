#include <iostream>
using namespace std;

int Sumar (int a, int b)
{ 
   return a + b;
}

int Calculadora (int a, int b, char operador)
{ 
   if (operador == '+')
   {
      return Sumar(a, b);
   }

   return -1;
}

int main(int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    char operador;

    cout << "Ingrese el valor de a" << endl;
    cin >> n1;
    cout << "Ingrese el valor de b" << endl;
    cin >> n2;
    cout << "Ingrese el Operador (+, -, *, /)" << endl;
    cin >> operador;
    
    cout << endl;
    
    cout << "RESULTADO" << endl;
    cout << n1 << operador << n2 << " = ";
    cout << Calculadora(n1, n2, operador) << endl;
    cout << endl;
    return 0;
}




