#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{ 
   int nota = 0;
   cout << "\n Ingrese la nota que obtuvo: ";
   cin >> nota;

   if (nota > 100 || nota <0 )
    {
      cout << "\n Ingrese una nota entre 0 y 100";
      return 0;
    }

if (nota >= 95 && nota <= 100 )
   {
     cout << "\n Obtuviste una A";
   }
   
 if (nota >= 75 && nota <= 94 )
   {
     cout << "\n Obtuviste una B";
   } 
 
 if (nota >= 65 && nota <= 74 )
   {
     cout << "\n Obtuviste una C";
   }
 
 if (nota >= 50 && nota <= 64 )
   {
     cout << "\n Obtuviste una D";
   }
if (nota < 50 )
   {
     cout << "\n Obtuviste una F";
   }

 return 0;
}