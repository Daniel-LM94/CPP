#include <iostream>
#include <stdlib.h> // srand, rand
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int NumSecreto = 0;
    int MiNumero = 0;
    
    // (Seed o "Semilla" Rand) Inicialisa el numero random 
    srand (time(NULL));
    
    // (rand o "Random") Genera un numero al azar entre 1 y 10
    NumSecreto = rand() % 10 + 1;

    do
    {  
        cout << "** Hey Adivina el Numero Secreto **" << endl;
        cout << "          entre 1 y 10" << endl;
        cin  >> MiNumero;
        cout << endl;

        if (NumSecreto < MiNumero && NumSecreto != MiNumero)
        {   
            system ("cls");
            cout << "El numero secreto podria ser menor" << endl;
            cout << "Intenta Denuevo" << endl;
            cout <<endl;
        }

        if (NumSecreto > MiNumero && NumSecreto != MiNumero)
        {   
            system ("cls"); 
            cout << "El numero secreto podria ser mayor" << endl;
            cout << "Intenta Denuevo" << endl;
            cout <<endl;
        }

    } while (NumSecreto != MiNumero);

    cout << "\nFELICIDADES ACERTASTE :)" << endl;
    cout << "\nEl Numero secreto es : [" << NumSecreto << "]"<<endl;
    cout <<endl;
    
    return 0;
}

