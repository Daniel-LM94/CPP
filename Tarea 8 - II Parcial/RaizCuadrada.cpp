// Daniel Eduardo Lainez M. N# 20132002457

#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    double Num;
    double Raiz;
    cout << "Para calcular la Raiz Cuadrada" << endl;
    cout << "     Ingrese un Numero" << endl;
    cin >> Num;

    Raiz = sqrt (Num);
    cout << "\nLa Raiz Cuadrada de [" << Raiz << "]" <<endl;
    cout <<   "               Es = [" << Raiz << "]" <<endl;

    return 0;
}
