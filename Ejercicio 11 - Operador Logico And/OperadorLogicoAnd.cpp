#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{  
  int a = 5;
  int b = 10;
  int c = 7;

 /* 
    If anidados con ELSE

    if (a > b && a > c)        
          cout << "a es el mayor : " << a;
    } else    
    {
        if (b > a && b > c)
        {        
         cout << "b es el mayor : " << b;
        }else
        {        
     
           if (c > a && c > b)
            {
             cout << "c es el mayor : " << c;
            }
        }
    }
 */

 // If separados 

    if (a > b && a > c)
    { 
      cout << "\n a es el mayor : " << a;       
    }
        
    if (b > a && b > c)
    {        
      cout << "\n b es el mayor : " << b;    
    }        
     
    if (c > a && c > b)
    {
      cout << "\n c es el mayor : " << c <<endl;
    } 
    
 return 0;
}
