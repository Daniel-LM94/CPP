#include <iostream>
using namespace std;

int main(int argc, char const *argv[])

{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Ingrese a : "<< endl;
    cin >> a;

    cout << "\n Ingrese b : "<< endl;
    cin >> b;

    cout << "\n Ingrese c : "<< endl;
    cin >> c;
    
    cout << endl;

    if (a > b)
    { 
        if (a > c)
        {
          cout << "a es el mayor "<< endl;
        } else
        {
          cout << "b es el mayor "<< endl;
        }
    } else
    {
        if (b > c)
        {
          cout << "b es el mayor "<< endl;
        } else
        {
          cout << "c es el mayor "<< endl;
        }       
    }
    
    return 0;
}
