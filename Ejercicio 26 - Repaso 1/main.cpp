#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{    
        cout << "Ciclo For" << endl;

     for (int i = 1; i <= 10; i++)
     {
        cout << "indice = " << i;
        cout << endl;
     }

        cout << endl;
        cout << endl;

        cout << "Ciclo While" << endl;

     int i = 0;
     while (i < 10)
     {
        i++;
        cout << "indice = " << i;
        cout << endl;
     }
return 0;
}
