#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{       
    /*string Nombres [3] [2];

    Nombres [0] [0] = "Juan";
    Nombres [0] [1] = "Perez";

    Nombres [1] [0] = "Maria";
    Nombres [1] [1] = "Martinez";

    Nombres [2] [0] = "Pedro";
    Nombres [2] [1] = "Gimenez";*/
    
    const int fila = 4;  // ¿Preguntar por que no funciona solo con "int"?
    const int columna = 2;  // ¿Por que se nesesita un "const"? 

    string nombres [fila] [columna] =
    { 
        {"Juan",  "Perez"},
        {"Maria", "Martinez"},
        {"Pedro", "Gimenez"},
        {"Pablo", "Hernandez"}        
    };
   
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            cout << nombres [i] [j] << endl;
        }    
    }
}