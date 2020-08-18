#include <iostream> 
using namespace std;


int fib (int P) // fib de "Fibonacci", P de "Pocicion" 
{ 
    if (P <= 1) // Caso base 0 + 1 = 1  --> en adelante mayores a 1
    {
        return P;
    }
    //          (Pocicion 9 - 1) + (Pocicion 9 - 2) 
    //                       (8) + (7) = 17       
    return fib (P - 1) + fib (P - 2);
}

int main(int argc, char const *argv[])
{   
    cout << fib (9) << endl;
    cout << endl;    
    
    return 0;
}
