#include <iostream>
using namespace std;

// Operaciones ARITMETICAS
int Sumar (int a, int b)
{ 
   return a + b;
}

int Restar (int a, int b)
{ 
   return a - b;
}

int Multiplicar (int a, int b)
{ 
   return a * b;
}

int Dividir (int a, int b)
{ 
   return a / b;
}

int Calculadora (int a, int b, char operador)
{ 
  switch (operador)
{
case '+':
   return Sumar(a, b);
   break;

case '-':
   return Restar(a, b);
   break;

case '*':
   return Multiplicar(a, b);
   break;

case '/':

   if(b==0)
   { 
      throw "No se puede dividir entre cero!";
   }

   return Dividir(a, b);
   break;

default:
   break;
}

   throw "El Operador no existe"; // throw = Lanzar (en este caso un error)
}


int main(int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    char operador;
    int Resultado = 0;

    cout << endl;
    cout << "Ingrese el valor de a" << endl;
    cin >> n1;
    cout << "Ingrese el valor de b" << endl;
    cin >> n2;
    cout << "Ingrese el Operador (+, -, *, /)" << endl;
    cin >> operador;    
    cout << endl;

    try
    {
      cout << "RESULTADO" << endl;
      cout << n1 << " " << operador << " " << n2 << " = ";
      cout << Calculadora(n1, n2, operador) << endl;
      cout << endl;
    }
    catch(const char* error) // catch = Captura (captura el error lanzado de arriba)
    {
       cout << error << endl;
       cout << endl;
    }   

    return 0;
}




