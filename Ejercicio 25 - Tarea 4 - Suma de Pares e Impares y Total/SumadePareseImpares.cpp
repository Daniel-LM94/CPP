// Daniel Eduardo Lainez M. N# 20132002457
#include <iostream>
using namespace std;

int Total;
int Pares = 0;
int Impares = 0;
int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)          // Solo los Pares (Divicion Residuo = 0)
        {                        // Alternativa de if (i==2 || i==4 || i==6 || i==8 || i==10)
          Pares = Pares+i;       // nuevo valor = viejo valor + valor actual de "i"
         
        }
        
        if (i % 2 == 1)          // Solo los Inpares (Divicion Residuo = 1)
        {
          Impares = Impares+i;
        }

        cout << i <<" ";
    }

        Total = Pares + Impares;
        cout << endl;
        cout << endl;
        cout << "La suma de los Pares   = [" << Pares << "]" << endl;
        cout << "La suma de los Inpares = [" << Impares << "]" << endl;
        cout << "Total Pares e Impares  = [" << Total << "]" << endl;

    return 0;
}