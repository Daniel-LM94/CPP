#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (int argc, char const * argv[]) 
{ 
    int numero = 0;
    // Inicializa el numero random ("start random")
    srand (time (NULL));
    
    for (int i = 0; i <= 20; i++) // Ciclos
    {
     // Genera un numero al azar entre 1 y 10  (Modifique el 10 para cambiar el rango)
        numero = rand() % 10 + 1;           
        cout << "Numero al Azar : " << numero << endl;
    }

    return 0;
}

