#include <iostream>
using namespace std;

int SUMA (int a, int b) 
{ 
    return a + b; 
}
int RESTA (int a, int b) 
{ 
    return a - b; 
}
  
int main(int argc, char const *argv[])
{
    system ("cls");
    int Num1;
    int Num2;

    cout << endl;
    cout << "Ingrese el Valor de a" << endl;
    cin >> Num1;
    cout << "Ingrese el Valor de b" << endl;
    cin >> Num2;
    cout << endl;

    cout << "Suma = " << SUMA (Num1, Num2) << endl;
    cout << endl;

    cout << "Resta = " << RESTA (Num1, Num2) << endl;
    cout << endl;
       
    return 0;
}
