// Daniel Eduardo Lainez M. N# 20132002457

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int N = 0; // Numero de veses agitadas
int Dado1 = 0;
int Dado2 = 0;
int Respuesta = 0;
bool Conclusion;

int main (int argc, char const * argv[])
{   
    do
    { 
      if (Respuesta == 1) // Si hay Segunda Vez Jugada
      {
       cout << "Resultado Anterior" << endl;
       cout << "Dado 1 = [" << Dado1 << "]" << endl;
       cout << "Dado 2 = [" << Dado2 << "]" << endl;
      }

      // Primer Juego
      cout << endl;
      cout << endl;  
      cout << "        Bienvenido a los Dados" << endl;
      cout << "Para lansar los 2 dados primero agitalos" << endl;
      cout << endl;
      cout << "Numero de Veses agitadas" << endl;
      cin >> N; 

      cout << endl;   
      cout << "Cada dados tiene valores entre 1 y 6" << endl;
    
      // Inicializa el numero random ("Seed random")
      srand (time (NULL));
    
      for (int i = 0; i <= N; i++) // Dado 1
      {
       // Genera un numero al azar entre 1 y 6  (Modifique el 6 para cambiar el rango)
       Dado1 = rand() % 6 + 1;           
      }
      cout << "Dado 1 = [" << Dado1 << "]" << endl;

      for (int i = 0; i <= N; i++) // Dado 2
      {
      Dado2 = rand() % 6 + 1;
      }
      cout << "Dado 2 = [" << Dado2 << "]" << endl;

      
      cout << "\nLansaras otra vez?" << endl;
      cout << "1 (Si Continuar)" << endl;
      cout << "2 (No Salir)" << endl;
      cin >> Respuesta;
    
      if (Respuesta == 1)
      {
        system ("cls");
        Conclusion = true;
      }else
      {
        Conclusion = false;
      }

    } while (Conclusion == true);   

    return 0;
        
}