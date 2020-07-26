#include <iostream>
using namespace std;

int Pares = 0;
int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)          // Solo los Pares (Divicion Residuo = 0)
        {                        // Alternativa de if (i==2 || i==4 || i==6 || i==8 || i==10)
          Pares = Pares+i;       // nuevo valor = viejo valor + valor actual de "i"
         
        }
        cout << i <<" ";
    }
        cout << endl;
        cout << endl;
        cout << "La suma de los Pares = [" << Pares << "]" << endl;
    return 0;
}