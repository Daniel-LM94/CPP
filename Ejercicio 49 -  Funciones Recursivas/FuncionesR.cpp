#include <iostream>
using namespace std;

int NumSecreto = 7;

void AdivinarNumSecreto (int MiNumero)
{
    if (NumSecreto == MiNumero) // Bucle con funcion() recursiva
    { 
        cout << "Adivinaste! : " << endl;
    }
    else
    {
      cout << "Intento Fallido con : " << MiNumero << endl;

      int OtroNumero = 0;
      
      cout << "Ingrese otro numero" << endl;
      cin >> OtroNumero;
   // La funcion se llama asi misma y cambia su argumento a (OtroNumero)
      AdivinarNumSecreto (OtroNumero); // Funcion Recursiva

    }
}

int main(int argc, char const *argv[])
{
   AdivinarNumSecreto (5); // Invoca la funcion y le da valor 5 al Argumento
   return 0;               // la variable (int MiNumero)
}