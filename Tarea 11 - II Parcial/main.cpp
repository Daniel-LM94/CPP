// Daniel Eduardo Lainez M. N# 20132002457

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (int argc, char const * argv[]) 
{ 
    int N = 0;
    // Inicializa el numero random ("start random")
    srand (time (NULL));

    int ARRAY [5] [5];
    int Sumando = 0;

    cout << endl;
    cout << endl;
    cout << " ******** MATRIZ 5x5 ******** " << endl;
    cout << endl;

    for (int i = 0; i <= 4; i++) // Ciclos
    { 
        for (int j = 0; j <= 4; j++)
        { 
        // Genera un numero al azar entre 1 y 10  (Modifique el 10 para cambiar el rango)
        N = rand() % 10 + 1;           
                
        ARRAY [i] [j] = N;
        Sumando = Sumando + N;

        cout << " [ " << ARRAY [i] [j] << " ] ";

        }

        cout << endl;
    }        
        cout << "\nTotal Array = [ " << Sumando << " ]";
        cout << endl;
        cout << endl;   

    return 0;    
}

